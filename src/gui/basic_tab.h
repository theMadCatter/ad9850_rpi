#ifndef _BASIC_TAB_H
#define _BASIC_TAB_H

#include <QLabel>
#include <QPushButton>
#include <QSpinBox>

class BasicTab : public QWidget {
  Q_OBJECT

private:
  QSpinBox *freq_entry;
  QLabel *freq_entry_label;
  QPushButton *run_button;
  QSpinBox *time_entry;
  QPushButton *run_for_button;
  QLabel *time_entry_label;

  unsigned int freq;
  unsigned int run_time_ms;

signals:
  void run(unsigned int f_val);
  void run_for(unsigned int f_val, unsigned int time_ms);
  void stop();

public slots:
  void handle_freq_changed(int val);
  void handle_time_changed(int val);
  void handle_run_for();
  void handle_run();
  void handle_stop();

public:
  explicit BasicTab(QWidget *parent = 0);
};

#endif

struct PrintTimer {
  private:
  TStopwatch watch;
  int calls;
  public:
  PrintTimer() : watch {}, calls{0} {};
  void operator() (const char* msg="") {
    cout << Form("tag (%2i): %10s   RealTime: %10.5f", calls, msg, watch.RealTime()) << endl;
    watch.Continue();
    ++calls;
  }
};


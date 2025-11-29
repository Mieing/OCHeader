@interface AWEStudioSwiftImpl.ToneCloneRecorderViewController : UIViewController <DUXLoadingToastDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_micView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_waveFormView;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ impactGenerator;
    void /* unknown type, empty encoding */ recorder;
    void /* unknown type, empty encoding */ audioRecordUrl;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ taskFlow;
    void /* unknown type, empty encoding */ taskProgress;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ isRecording;
    void /* unknown type, empty encoding */ storedPermission;
}

- (void)DUXLoadingToastDidClosed:(id)a0;
- (void)audioSessionInterruptWithNotification:(id)a0;
- (void)willResignActiveWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end

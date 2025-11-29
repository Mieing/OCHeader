@interface AWEMusicStreamingSwiftImpl.MusicCardViewController : UIViewController <AWEMusicCardServiceDelegate, HunterContainerLifeCycleProtocol> {
    void /* unknown type, empty encoding */ aweModel;
    void /* unknown type, empty encoding */ isPureMode;
    void /* unknown type, empty encoding */ playStatus;
    void /* unknown type, empty encoding */ stallState;
    void /* unknown type, empty encoding */ interactor;
    void /* unknown type, empty encoding */ loadTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bgContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backupImageView;
    void /* unknown type, empty encoding */ callbackContainer;
    void /* unknown type, empty encoding */ containerView;
}

- (void)onCardInfoUpdate:(id)a0 awemeId:(id)a1;
- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end

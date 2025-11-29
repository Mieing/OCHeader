@class UIView;
@protocol HunterContainerProtocol;

@interface AWEMultiContentImpl.LynxContentView : UIView <HunterContainerLifeCycleProtocol, AFDRichContentLynxViewProtocol> {
    void /* unknown type, empty encoding */ isInFullPage;
    void /* unknown type, empty encoding */ loadedModel;
    void /* unknown type, empty encoding */ albumContentMode;
    void /* unknown type, empty encoding */ contentSizeChangeBlock;
    void /* unknown type, empty encoding */ imageCompletionBlock;
    void /* unknown type, empty encoding */ imageLoadFinished;
    void /* unknown type, empty encoding */ isLoaded;
    void /* unknown type, empty encoding */ backupImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ lynxModel;
    void /* unknown type, empty encoding */ scene;
}

@property (nonatomic, retain) UIView<HunterContainerProtocol> *containerView;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end

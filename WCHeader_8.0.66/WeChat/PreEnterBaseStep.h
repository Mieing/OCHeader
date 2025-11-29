@class NSString, MMUIWindow, MMLoadingView;
@protocol PreEnterStepDelegate;

@interface PreEnterBaseStep : NSObject {
    MMUIWindow *m_window;
    MMLoadingView *m_loadingView;
}

@property (weak, nonatomic) id<PreEnterStepDelegate> delegate;
@property (readonly, nonatomic) NSString *stepId;

+ (BOOL)checkDeviceUUIDMatch:(id)a0;

- (void)dealloc;
- (void)startStep;
- (void)openFirstView;
- (void)openFirstViewAndSetEmptyMMVCAsRoot;
- (void)closeFirstView;
- (void)doneStepAndClose;
- (void)startLoading;
- (void)stopLoading;
- (id)rootMMViewController;
- (id)topViewController;
- (void).cxx_destruct;

@end

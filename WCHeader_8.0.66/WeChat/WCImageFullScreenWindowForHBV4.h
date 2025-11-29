@class NSString, WCImageFullScreenViewControllerForHBV4;
@protocol WCImageFullScreenWindowDelegate;

@interface WCImageFullScreenWindowForHBV4 : MMUIWindow <WCImageFullScreenViewControllerDelegateV4> {
    WCImageFullScreenViewControllerForHBV4 *m_controller;
}

@property (nonatomic) id<WCImageFullScreenWindowDelegate> wc_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animationShowWithHint:(id)a0;
- (void)animationShowWithMediaDataArray:(id)a0 originView:(id)a1 index:(unsigned int)a2;
- (void)onViewControllerAnimationShowWillStart;
- (void)onViewControllerAnimationHideStop;
- (void)onViewControllerAnimationHideWillStop;
- (void)windowNeed2Hide;
- (void)windowNeed2Show;
- (void)windowHideToLeft;
- (void)onAnimateFadeOut;
- (void)onViewBePopByMsgBar;
- (void)captureFakeWindow;
- (void)cancelCaptureFakeWindow;
- (void)startLoadingBlocked;
- (void)stopLoading;
- (void)showErrorTip:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, WCMediaItemWrap, WCImageFullScreenViewController;

@interface WCImageFullScreanViewMgr : MMUserService <WCTranslateImgViewControllerDelegate, MMServiceProtocol, WCImageFullScreenViewControllerDelegate> {
    BOOL _isFullScreenPresented;
    NSString *_nsFromVCName;
    WCImageFullScreenViewController *m_controller;
}

@property (retain, nonatomic) WCMediaItemWrap *currentMediaItemWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationShowWithHint:(id)a0 fromViewController:(id)a1;
- (void)animationShowWithParams:(id)a0 fromViewController:(id)a1 completeBlock:(id /* block */)a2;
- (void)animationShowWithMediaDataArray:(id)a0 originView:(id)a1 index:(unsigned int)a2 needEdit:(BOOL)a3 From3DTouch:(BOOL)a4 scene:(unsigned long long)a5 navigatingDelegate:(id)a6;
- (void)animationHideToLeft;
- (BOOL)isWindowShown;
- (void)onWindowAnimationWillHide;
- (void)onWindowAnimationHide;
- (void)handleOnWindowAnimationHide;
- (void)changePresentedState:(BOOL)a0;
- (void)updateCurrentMediaItemWrap:(id)a0;
- (void)fullScreenViewControllerWillBePushedOrPresented:(id)a0;
- (void)fullScreenViewControllerDidBePopedOrDismissed:(id)a0;
- (void)fullScreenViewController:(id)a0 didScrollFromIndex:(unsigned int)a1 toIndex:(unsigned int)a2;
- (void)fullScreenViewController:(id)a0 didClickOriginalArticle:(id)a1;
- (void)fullScreenViewController:(id)a0 didClickEcsInfoButton:(id)a1;
- (void)fullScreenViewController:(id)a0 didClickFinderInfoButton:(id)a1;
- (void)onViewControllerAnimationHideStop;
- (void)onViewControllerAnimationHideWillStop;
- (void)windowHideToLeft;
- (void)onAnimateFadeOut;
- (id)getViewController;
- (void)photoVCHideAnimationCompleted;
- (void).cxx_destruct;

@end

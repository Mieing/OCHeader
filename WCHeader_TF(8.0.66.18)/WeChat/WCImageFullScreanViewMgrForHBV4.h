@class NSString, WCImageFullScreenWindowForHBV4;

@interface WCImageFullScreanViewMgrForHBV4 : MMUserService <MMServiceProtocol, WCImageFullScreenWindowDelegate> {
    WCImageFullScreenWindowForHBV4 *m_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getWCImageFullScreenView;
- (void)forceHideWindow;
- (void)animationShowWithHint:(id)a0;
- (void)animationShowWithMediaDataArray:(id)a0 originView:(id)a1 index:(unsigned int)a2;
- (void)animationHideToLeft;
- (BOOL)isWindowShown;
- (void)captureFakeWindow;
- (void)cancelCaptureFakeWindow;
- (void)startLoadingBlocked;
- (void)stopLoading;
- (void)showErrorTip:(id)a0;
- (void)onWindowAnimationWillHide;
- (void)onWindowAnimationHide;
- (void).cxx_destruct;

@end

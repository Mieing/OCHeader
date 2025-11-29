@class UIPageControl, NSString, NSArray, MMUIWindow, UIView, MMScrollView, NSMutableArray;
@protocol WCImageFullScreenViewControllerDelegateV4;

@interface WCImageFullScreenViewControllerForHBV4 : MMUIViewController <UIScrollViewDelegate, scrollViewDelegate, WCImageFullScreenViewContainerDelegateForHBV4, IVOIPUILogicMgrExt, SessionSelectControllerDelegate> {
    UIView *m_fakeScreenView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_originImageRectInScreen;
    BOOL m_isAnimating;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    NSArray *m_arrMediaDataWrap;
    NSArray *m_arrMediaData;
    NSMutableArray *m_arrImage;
    BOOL m_hasScroll;
    BOOL m_isAnimationShowing;
    BOOL m_isRotating;
    BOOL m_forbidPreloadImg;
    MMUIWindow *m_fullScreenWindow;
    NSString *m_visibleTitle;
}

@property (nonatomic) unsigned int m_iCurIndex;
@property (weak, nonatomic) id<WCImageFullScreenViewControllerDelegateV4> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)getDataItem;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldRotateToInterfaceOrientation:(long long)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)viewDidLayoutSubviews;
- (void)clearStatus;
- (void)resetScrollView;
- (void)windowNeed2Show;
- (void)windowNeed2Hide;
- (void)animationShowWithMediaDataArray:(id)a0 mediaDataWrapArray:(id)a1 originView:(id)a2 index:(unsigned int)a3;
- (void)animationShowWithHint:(id)a0;
- (void)animationShowWithMediaDataArray:(id)a0 originView:(id)a1 index:(unsigned int)a2;
- (void)downloadImage;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)getVisibleViewController;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (void)showNavigationBar;
- (void)captureFakeWindow;
- (void)cancelCaptureFakeWindow;
- (void)showErrorTip:(id)a0;
- (void)startImageLoadingBlocked;
- (void)stopImageLoading;
- (void)onDetailViewReturn;
- (BOOL)isContainerVisible:(id)a0;
- (BOOL)shouldHideContainerOnRotate;
- (void)animationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationHideStop;
- (void)onAnimateFadeOut;
- (void)animationHideWithRotate;
- (void)captureScreen;
- (void)onLongPressedWithMediaItem:(id)a0;
- (void)onExposeWithDataItem:(id)a0;
- (id)onGetViewController;
- (void)onPushViewController:(id)a0 animated:(BOOL)a1;
- (void)touchesEnded_ScrollView:(id)a0 withEvent:(id)a1;
- (void)onVideoVoipViewDidAppear:(id)a0;
- (void).cxx_destruct;

@end

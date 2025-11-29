@class UIPageControl, NSString, NSMutableArray, UIView, MMScrollView, WCBizMultiImageBrowseData;
@protocol WCBizFullImageViewDelegate;

@interface WCBizFullImageView : MMUIWindow <UIScrollViewDelegate, scrollViewDelegate, WCBizMultiImageBrowseViewContainerDelegate, SessionSelectControllerDelegate, WCActionSheetDelegate> {
    UIView *m_fakeScreenView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_originImageRectInScreen;
    BOOL m_isAnimating;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    WCBizMultiImageBrowseData *m_oImageBrowseData;
    NSMutableArray *m_arrImage;
    BOOL m_hasScroll;
    long long m_lastDeviceOrientation;
}

@property (weak, nonatomic) id<WCBizFullImageViewDelegate> m_delegate;
@property (nonatomic) unsigned int m_iCurIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getWCBizFullScreenView;
+ (void)freeWCBizFullScreenView;

- (id)init;
- (void)dealloc;
- (void)clearStatus;
- (void)resetScrollView;
- (void)downloadImage;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)rotateToDeviceOrientation:(BOOL)a0;
- (id)getVisibleViewController;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (BOOL)shouldHideContainerOnRotate;
- (void)animationHideStop;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationHideStart;
- (void)animationHideWithRotate;
- (void)captureScreen;
- (void)onLongPressedWithWCBizImageBrowseItem:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)touchesEnded_ScrollView:(id)a0 withEvent:(id)a1;
- (void)didDeviceRotate;
- (void)onVideoVoipViewDidAppear:(id)a0;
- (void).cxx_destruct;

@end

@class MMImageScrollViewHelper, NSString, UIImage, NSArray, MMProgressViewEx, UIImageView, MMLoadingView, WCActionSheet, WCBizImageBrowseItem;
@protocol WCBizMultiImageBrowseViewContainerDelegate;

@interface WCBizMultiImageBrowseViewContainer : MMUIScrollView <CAAnimationDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate> {
    UIImageView *m_oBackGroundImageView;
    BOOL m_isAnimating;
    BOOL m_isShowing;
    BOOL m_bIsLongPressHandled;
    BOOL m_isImageReady;
    UIImageView *m_container;
    MMProgressViewEx *m_processView;
    UIImage *m_processBackGroundImage;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WCActionSheet *m_actionSheet;
}

@property (retain, nonatomic) UIImage *m_image;
@property (retain, nonatomic) WCBizImageBrowseItem *m_oImageBrowseItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_originImageRectInScreen;
@property (nonatomic) struct CGSize { double width; double height; } m_initalContentSize;
@property (weak, nonatomic) id<WCBizMultiImageBrowseViewContainerDelegate> m_delegate;
@property (retain, nonatomic) MMLoadingView *m_loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double zoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (copy, nonatomic) NSArray *gestureRecognizers;

- (id)init;
- (void)stopAllAnimation;
- (void)dealloc;
- (void)setZoomScale:(double)a0 animated:(BOOL)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)startLoadingBlocked;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (id)viewForZooming;
- (void)onSingleTap:(id)a0;
- (void)onDoubleTap:(id)a0;
- (void)initScrollViewHelper;
- (void)showProcessView;
- (void)clearStatus;
- (void)setContentOffsetAndSize;
- (void)animationShowView;
- (void)animationShowDidStop;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2;
- (void)setImageWithoutAnimation:(id)a0;
- (void)tryDownloadImage:(BOOL)a0;
- (void)animationHideWithRotate;
- (void)animationHideDidStop;
- (void)onDeviceRotate;
- (void)animationRotateDidStop;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)LongPressEvents;
- (void).cxx_destruct;

@end

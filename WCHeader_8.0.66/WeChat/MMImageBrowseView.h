@class NSString, MMEmoticonView, NSArray, UIView, MMImageScrollViewHelper;
@protocol MMImgageBrowseViewDelegate;

@interface MMImageBrowseView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate> {
    UIView *m_vImage;
    struct CGSize { double width; double height; } m_szFit;
    MMImageScrollViewHelper *m_scrollViewHelper;
}

@property (retain, nonatomic) MMEmoticonView *m_emoticonView;
@property (weak, nonatomic) id<MMImgageBrowseViewDelegate> m_delegate;
@property (readonly, nonatomic) BOOL isDisplayingNoImage;
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
- (void)InitImageView;
- (void)InitEmoticonView:(id)a0;
- (id)getImageView;
- (void)UpdateImage:(id)a0;
- (void)UpdateImage:(id)a0 orientation:(long long)a1 supportHorizontalLong:(BOOL)a2;
- (void)UpdateImage:(id)a0 orientation:(long long)a1;
- (void)UpdateData:(id)a0;
- (void)UpdateData:(id)a0 orientation:(long long)a1;
- (void)UpdateEmoticon:(id)a0;
- (void)ResetScroll;
- (void)ZoomForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (id)viewForZooming;
- (id)getScrollView;
- (void)scrollViewDidZoom:(id)a0;
- (void)onSingleTap:(id)a0;
- (void)onDoubleTap:(id)a0;
- (void)OnLongPress:(id)a0;
- (void).cxx_destruct;

@end

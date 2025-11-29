@class NSString, UIView, MMScrollView, NSMutableArray;

@interface WCCanvasDownloadScrollListComponent : WCCanvasComponent <UIScrollViewDelegate, scrollViewDelegate>

@property (retain, nonatomic) UIView *m_bgMask;
@property (retain, nonatomic) MMScrollView *m_scrollView;
@property (nonatomic) BOOL m_isAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } m_curOffset;
@property (nonatomic) BOOL m_hasScroll;
@property (retain, nonatomic) NSMutableArray *m_arrCanvasComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
+ (double)calcMaxHeightWithGroup:(id)a0 maxWidth:(double)a1 advertiseInfo:(id)a2 orientation:(long long)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)clearStatus;
- (void)resetScrollView;
- (void)animationShowWithIndex:(unsigned long long)a0;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentReportAddExposureCount;
- (BOOL)encoreShakeShouldForbidShakeSpecialView;
- (id)fetchFirstComponentForType:(int)a0;
- (void)shareComponentDidBeClickedWithType:(long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)notifyWhenScrollViewDidScrollOrDidEndDecelerating:(id)a0;
- (void)notifyWillAppearScrollView:(struct CGPoint { double x0; double x1; })a0;
- (void)notifyDisappearScrollView:(struct CGPoint { double x0; double x1; })a0;
- (void)notifyAppearOrDisappearWhenScrollWithLastOffset:(struct CGPoint { double x0; double x1; })a0 curOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end

@class UIPanGestureRecognizer, NSString, UIView;
@protocol MMFinderLiveShopShelfContainerDelegate;

@interface MMFinderLiveShopShelfContainerView : UIView <UIGestureRecognizerDelegate, MMFinderLiveShopShelfPageCornerCropper>

@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL isOpening;
@property (nonatomic) BOOL moveContentOnPanTableView;
@property (readonly, nonatomic) double viewTopAtPanBegin;
@property (nonatomic) double previousPanPositionY;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (weak, nonatomic) id<MMFinderLiveShopShelfContainerDelegate> delegate;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (BOOL)isLandScape;
- (void)onBackgroundTapped;
- (void)openWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)closeWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)handleContentViewPanGesture:(id)a0;
- (void)handleTableView:(id)a0 panGesture:(id)a1;
- (void)handleTableView:(id)a0 panOnMoveTo:(double)a1;
- (void)handleTableViewPanOnEnd;
- (void)cropCornersFor:(id)a0;
- (void).cxx_destruct;

@end

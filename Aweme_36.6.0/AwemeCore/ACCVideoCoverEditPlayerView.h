@class ACCVideoCoverEditPlayerContentView;
@protocol ACCVideoCoverEditPlayerViewDataSource;

@interface ACCVideoCoverEditPlayerView : UIView

@property (retain, nonatomic) ACCVideoCoverEditPlayerContentView *editContentView;
@property (nonatomic) struct CGSize { double width; double height; } lastUpdateContentViewSize;
@property (nonatomic) long long currentIndex;
@property (weak, nonatomic) id<ACCVideoCoverEditPlayerViewDataSource> dataSource;

- (id)playerGestureView;
- (void)setupViewsIfNeed;
- (id)p_previewViewAtIndex:(long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end

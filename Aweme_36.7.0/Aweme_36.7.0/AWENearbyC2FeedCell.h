@class NSString, UICollectionView;

@interface AWENearbyC2FeedCell : AWENearbyC2BaseFeedCell <UIGestureRecognizerDelegate, AWENearbyC2ContainerFeedCellProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UICollectionView *collectionView;

+ (struct CGSize { double x0; double x1; })calculateCellSizeWithWidth:(double)a0 model:(id)a1;

- (void)didClick;
- (void)handleTapGes:(id)a0;
- (void)endDisplay;
- (BOOL)trackClientClickEnable;
- (void)configCellWithModel:(id)a0 withIndex:(long long)a1 cellWidth:(double)a2 pageContext:(id)a3;
- (void)onClickWithModel:(id)a0;
- (void)willDisplayWhenDidAppear;
- (void)resetChildViewController;
- (void)addChildVCWithCellWidth:(double)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

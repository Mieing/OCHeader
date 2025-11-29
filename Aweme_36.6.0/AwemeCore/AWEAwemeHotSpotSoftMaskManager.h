@class AWEDiscoverBezierCurve2DCaculator, AWENewHotSearchModel, NSDictionary, UIView;

@interface AWEAwemeHotSpotSoftMaskManager : NSObject

@property (nonatomic) BOOL shouldShowAnimationToSoftMask;
@property (nonatomic) BOOL isEndScroll;
@property (weak, nonatomic) UIView *formerView;
@property (weak, nonatomic) UIView *latterView;
@property (retain, nonatomic) AWENewHotSearchModel *startHotSearchModel;
@property (nonatomic) long long startHotSearchIndex;
@property (copy, nonatomic) NSDictionary *startLogExtraDict;
@property (retain, nonatomic) AWEDiscoverBezierCurve2DCaculator *bezierCurveCaculator;
@property (nonatomic) BOOL isBlockInsertOperation;

- (void)onScrollBackToIndex:(double)a0;
- (void)triggerCellAnimationWithPercentage:(double)a0 cellHeight:(double)a1;
- (void)resetViewCornerAndTransform:(id)a0;
- (void)resetLogInfor;
- (void)trackHotSpotSwitchInfo:(id)a0 currentIndex:(long long)a1;
- (void)addViewCornerAndTransform:(id)a0 tranlationX:(double)a1 tranlationY:(double)a2 zoomScale:(double)a3 cornerRadius:(double)a4;
- (void)scrollViewWillBeginDragging:(id)a0 velocityY:(double)a1 startHotSearchIndex:(long long)a2 startLogExtraDic:(id)a3 startHotSearchModel:(id)a4;
- (void)scrollViewDidScroll:(id)a0 height:(double)a1 percentage:(double)a2;
- (BOOL)shouldChangeShowStateOfMaskView:(BOOL)a0 currentModel:(id)a1;
- (void)onCellConfig:(id)a0 currentPlayingIndex:(long long)a1 willDisplayIndex:(long long)a2 model:(id)a3;
- (void)onCellWillDisplay:(id)a0 currentPlayingIndex:(long long)a1 willDisplayIndex:(long long)a2 model:(id)a3;
- (void)onCellDidEndDisplay:(id)a0 shouldReset:(BOOL)a1;
- (void)onScrollDidEndWithIndexPath:(long long)a0 currentHotSearchModel:(id)a1;
- (void).cxx_destruct;
- (BOOL)isAnimating;
- (void)scrollViewWillEndDragging:(long long)a0;

@end

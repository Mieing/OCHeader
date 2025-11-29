@class CAShapeLayer, MMFinderLiveChooseClarityViewNavBar, UIView, MMFinderLiveMultiAngleCollectionView, MMFinderLiveAngleViewModel;

@interface MMFinderLiveMultiAngleView : MMPageSheetBaseView

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMFinderLiveChooseClarityViewNavBar *navBar;
@property (retain, nonatomic) MMFinderLiveMultiAngleCollectionView *mainCollectionView;
@property (weak, nonatomic) MMFinderLiveAngleViewModel *angleViewModel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (double)getItemWidth;
- (double)getItemHeight;
- (double)getAngleViewCollectionViewHeight;
- (void).cxx_destruct;

@end

@class CAGradientLayer, AppVideoMessageViewModel, SightIconView, MMUILabel;

@interface AppVideoMessageCellView : BizAppBaseMessageCellView

@property (retain, nonatomic) SightIconView *playIconImgView;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (readonly, nonatomic) AppVideoMessageViewModel *viewModel;

- (BOOL)canBeReused;
- (void)layoutContentView;
- (id)coverImage;
- (id)coverImageView;
- (void)addTitleLabel;
- (void)addCoverImageView;
- (void)addTimeLabel;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void).cxx_destruct;

@end

@class SightIconView, MMWebImageView, BTMissedSubsVideoItemViewModel, MMUILabel;

@interface BTMissedSubsVideoItemCell : BTMissedSubsBaseItemCell

@property (retain, nonatomic) MMWebImageView *coverImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) SightIconView *playIconView;
@property (readonly, nonatomic) BTMissedSubsVideoItemViewModel *viewModel;

- (void)setViewModel:(id)a0;
- (void)configureLayout;
- (void)layoutSubviews;
- (unsigned long long)contentViewRaddiCorners;
- (void).cxx_destruct;

@end

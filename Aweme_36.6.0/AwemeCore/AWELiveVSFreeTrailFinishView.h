@class UILabel, UIVisualEffectView, AWELiveVSFreeTrailFinishCard;

@interface AWELiveVSFreeTrailFinishView : UIView

@property (retain, nonatomic) UIVisualEffectView *blurEffectBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWELiveVSFreeTrailFinishCard *freeTrailFinishCard;

- (void)reloadWithData:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)init;
- (void)setup;

@end

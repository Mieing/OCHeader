@class UILabel, UIImageView, UIView;

@interface AWETeenHotSpotTitleView : UIView

@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *subTitleContainer;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *hotSpotBgView;
@property (retain, nonatomic) UIImageView *hotSpotLabel;

- (void)p_setupView;
- (void)updateWithHotSpotModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

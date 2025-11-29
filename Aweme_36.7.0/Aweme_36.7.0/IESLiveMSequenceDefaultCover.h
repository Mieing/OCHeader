@class HTSLiveUser, CAGradientLayer, UIImageView, UILabel, UIView;

@interface IESLiveMSequenceDefaultCover : UIView

@property (retain, nonatomic) HTSLiveUser *liveUser;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)addGradent;
- (id)initWithLivingUser:(id)a0;
- (void).cxx_destruct;
- (void)setupView;

@end

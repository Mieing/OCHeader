@class UILabel, IESECVideoCountdownView, UIImageView;

@interface IESECVideoGirdleRightView : UIView

@property (nonatomic) long long type;
@property (retain, nonatomic) IESECVideoCountdownView *countdownView;
@property (retain, nonatomic) UILabel *sloganLabel;
@property (retain, nonatomic) UIImageView *sloganImageView;

- (void)setupUIWithType:(long long)a0;
- (void)updateWithCountdownViewModel:(id)a0;
- (void)updateWithSloganImage:(id)a0;
- (void)updateWithSloganText:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)updateWithViewModel:(id)a0;

@end

@class UILabel;

@interface IESECGoodsActivityCountdownView : UIView

@property (retain, nonatomic) UILabel *hourLabel;
@property (retain, nonatomic) UILabel *minLabel;
@property (retain, nonatomic) UILabel *secondLabel;

- (void)updateTime:(id)a0;
- (id)timeLabel;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (void)setupUI;

@end

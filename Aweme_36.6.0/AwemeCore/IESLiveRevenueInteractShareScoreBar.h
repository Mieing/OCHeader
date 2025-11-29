@class IESLivePKScoreBarConfig, UIView;

@interface IESLiveRevenueInteractShareScoreBar : UIView

@property (nonatomic) double ratio;
@property (nonatomic) long long leftNum;
@property (nonatomic) long long rightNum;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *leftNumView;
@property (retain, nonatomic) UIView *rightNumView;
@property (retain, nonatomic) IESLivePKScoreBarConfig *config;

- (void)setLeftScore:(long long)a0;
- (void)setRightScore:(long long)a0;
- (id)initWithDIContext:(id)a0 config:(id)a1;
- (void)updateScoreView;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

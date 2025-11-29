@class UILabel, UIImageView, UIView;

@interface IESLivePKInviteeListTipsView : UIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *tipsBackgroundView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) long long arrowAlignment;

- (id)initWithTipsText:(id)a0 arrowAlignment:(long long)a1;
- (void)layoutUIWithTips:(id)a0;
- (void).cxx_destruct;

@end

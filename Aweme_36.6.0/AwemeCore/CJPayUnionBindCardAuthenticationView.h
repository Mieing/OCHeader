@class UIImageView, UILabel;

@interface CJPayUnionBindCardAuthenticationView : UIView

@property (retain, nonatomic) UIImageView *leftIconOne;
@property (retain, nonatomic) UIImageView *leftIconTwo;
@property (retain, nonatomic) UIImageView *leftIconThree;
@property (retain, nonatomic) UILabel *nameTitleLabel;
@property (retain, nonatomic) UILabel *IDTitleLabel;
@property (retain, nonatomic) UILabel *phoneNumTitleLabel;
@property (retain, nonatomic) UILabel *nameSubTitleLabel;
@property (retain, nonatomic) UILabel *IDSubTitleLabel;
@property (retain, nonatomic) UILabel *phoneNumSubTitleLabel;

- (void)updateContentName:(id)a0 idNum:(id)a1 phoneNum:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end

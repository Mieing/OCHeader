@class NSArray, NSString, UILabel, CJPayStyleCheckBox, CJPayUserInfo;

@interface CJPayBindCardProtocolView : UIView

@property (retain, nonatomic) CJPayStyleCheckBox *leftButton;
@property (retain, nonatomic) UILabel *protocolLabel;
@property (copy, nonatomic) NSArray *agreements;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) id /* block */ agreeCompletion;
@property (copy, nonatomic) id /* block */ protocolClickCompletion;
@property (copy, nonatomic) id /* block */ protocolSelectCompletion;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long cardBindSource;
@property (retain, nonatomic) CJPayUserInfo *userInfo;

- (void)leftButtonClick;
- (void)gotoProtocolDetail:(BOOL)a0 showContinueButton:(BOOL)a1;
- (void)protocolLabelTapped;
- (void)updateWithAgreements:(id)a0 isNeedAgree:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

@class CJPayUnionBindCardAuthorizationResponse, CJPayStyleButton, UIImageView, CJPayUnionBindCardAuthenticationView, UILabel, UIView, CJPayCommonProtocolView;

@interface CJPayUnionBindCardHalfAccreditView : UIView

@property (retain, nonatomic) UIImageView *changeIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) CJPayUnionBindCardAuthenticationView *authView;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) CJPayUnionBindCardAuthorizationResponse *authorizationResponse;
@property (copy, nonatomic) id /* block */ protocolClickBlock;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;

@end

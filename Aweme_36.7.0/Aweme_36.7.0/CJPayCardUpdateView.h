@class CJPayBindCardProtocolView, CJPayStyleButton, CJPayCustomTextFieldContainer, UILabel, CJPayBindCardContainerView, MASConstraint;

@interface CJPayCardUpdateView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayBindCardContainerView *bankCardView;
@property (retain, nonatomic) CJPayCustomTextFieldContainer *phoneContainer;
@property (retain, nonatomic) CJPayBindCardProtocolView *protocolView;
@property (retain, nonatomic) CJPayStyleButton *nextStepButton;
@property (retain, nonatomic) MASConstraint *nextStepButtonBasePhoneContainerConstraint;
@property (retain, nonatomic) MASConstraint *nextStepButtonBaseProtocolViewConstraint;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void)p_updateUI;
- (void)p_nextButtonClick;
- (void)updateWithBDPayCardUpdateModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end

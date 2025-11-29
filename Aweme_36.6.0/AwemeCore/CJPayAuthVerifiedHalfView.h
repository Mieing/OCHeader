@class UIStackView, UIView, CJPayAuthAgreementContentModel, UIImageView, NSDictionary, CJPayAuthVerifiedTipsItemView, CJPayTouchLabel, CJPayStyleButton, CJPayButton, UILabel;

@interface CJPayAuthVerifiedHalfView : UIView

@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *applyInfoTitle;
@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) UIImageView *exclamatoryMarkImageView;
@property (retain, nonatomic) CJPayAuthVerifiedTipsItemView *tipsItemView;
@property (retain, nonatomic) UIStackView *tipsStackView;
@property (retain, nonatomic) CJPayTouchLabel *protocolLabel;
@property (retain, nonatomic) CJPayStyleButton *authButton;
@property (retain, nonatomic) CJPayButton *notMeButton;
@property (retain, nonatomic) CJPayAuthAgreementContentModel *model;
@property (copy, nonatomic) NSDictionary *customStyle;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ logoutBlock;
@property (copy, nonatomic) id /* block */ notMeBlock;
@property (copy, nonatomic) id /* block */ authVerifiedBlock;
@property (copy, nonatomic) id /* block */ protocolClickedBlock;
@property (copy, nonatomic) id /* block */ clickExclamatoryMarkBlock;

- (id)p_getAttributeStringWithProtocolArray:(id)a0;
- (void)p_tapCloseImageView;
- (void)p_authButtonTapped;
- (void)p_notMeButtonTapped;
- (void)p_tapExclamatoryMarkImageView;
- (void)hideExclamatoryMark:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStyle:(id)a0;
- (void)updateWithModel:(id)a0;

@end

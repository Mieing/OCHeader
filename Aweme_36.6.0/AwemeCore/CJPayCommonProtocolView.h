@class CJPayStandardSwitch, UILabel, CJPayStyleCheckBox, CJPayCommonProtocolModel;

@interface CJPayCommonProtocolView : UIView

@property (retain, nonatomic) CJPayStyleCheckBox *checkBox;
@property (retain, nonatomic) CJPayStandardSwitch *switchButton;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) CJPayCommonProtocolModel *protocolModel;
@property (copy, nonatomic) id /* block */ protocolClickBlock;
@property (copy, nonatomic) id /* block */ checkBoxClickBlock;
@property (copy, nonatomic) id /* block */ getProtocolViewHeightBlock;
@property (nonatomic) BOOL protocolClickHandleInBlockOnly;

- (void)p_updateViewsConstraint;
- (id)initWithCommonProtocolModel:(id)a0;
- (BOOL)protocolHasAgreed;
- (void)setCheckBoxSelected:(BOOL)a0;
- (BOOL)isCheckBoxSelected;
- (void)updateWithCommonModel:(id)a0;
- (void)executeWhenProtocolSelected:(id /* block */)a0 notSeleted:(id /* block */)a1 hasToast:(BOOL)a2;
- (void)p_setAgreeStatus:(BOOL)a0;
- (void)p_updateProtocolContent;
- (id)p_getSeparateAtributeStrWithAttributes:(id)a0;
- (id)p_getSelectGroupWithTapGesture:(id)a0;
- (id)p_getAgreementsWithGroupId:(id)a0;
- (void)p_gotoProtocolDetailVCWithAgreements:(id)a0;
- (id)p_getAgreementsWithMemAgreeList:(id)a0;
- (double)p_protocolViewHeight;
- (void)agreeCheckBoxTapped;
- (void)protocolLabelTapped:(id)a0;
- (id)getClickBtnView;
- (void)executeWhenProtocolSelected:(id /* block */)a0;
- (id)p_getSpaceAtributeStr;
- (void)p_setupUI;
- (void).cxx_destruct;

@end

@class CJPayCommonProtocolModel, CJPayCommonProtocolView, CJPayStandardButton;

@interface CJPayGuideWithConfirmView : UIView

@property (nonatomic) BOOL isShowButton;
@property (retain, nonatomic) CJPayCommonProtocolModel *protocolModel;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayStandardButton *confirmButton;

- (void)p_updateViewsConstraint;
- (void)updateProtocolModel:(id)a0 isShowButton:(BOOL)a1;
- (id)initWithCommonProtocolModel:(id)a0 isShowButton:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;

@end

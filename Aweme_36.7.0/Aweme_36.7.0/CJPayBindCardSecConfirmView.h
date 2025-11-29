@class CJPayStyleButton, CJPayMarketingMsgView, CJPaySecondaryConfirmInfoModel, CJPayButton;

@interface CJPayBindCardSecConfirmView : UIView

@property (retain, nonatomic) CJPayStyleButton *confirmPayBtn;
@property (retain, nonatomic) CJPayMarketingMsgView *marketingMsgView;
@property (retain, nonatomic) CJPaySecondaryConfirmInfoModel *confirmInfo;
@property (readonly, nonatomic) CJPayButton *closeButton;

- (void)p_setupUIForBindCardHalfPage;
- (id)p_stringSeparatedWithDollar:(id)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end

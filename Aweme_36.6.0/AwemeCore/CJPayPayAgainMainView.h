@class CJPayPayAgainMainViewModel, UIView, NSArray, CJPayChoosePayMethodGroupView, CJPayBubbleView, UIImageView, CJPayTextArrowView, CJPayPayAgainDisplayInfo, CJPayStandardButton, UILabel, UIScrollView;

@interface CJPayPayAgainMainView : UIView

@property (retain, nonatomic) CJPayPayAgainMainViewModel *model;
@property (copy, nonatomic) NSArray *groupViewModels;
@property (nonatomic) BOOL isFold;
@property (nonatomic) BOOL isShowedButtonTips;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) UIView *popupContentView;
@property (retain, nonatomic) UIImageView *popupViewIconImageView;
@property (retain, nonatomic) UILabel *popupViewLabel;
@property (retain, nonatomic) CJPayBubbleView *bubbleView;
@property (retain, nonatomic) CJPayTextArrowView *unfoldBtnView;
@property (retain, nonatomic) CJPayStandardButton *confirmButton;
@property (retain, nonatomic) CJPayPayAgainDisplayInfo *payAgainDisplayInfo;
@property (retain, nonatomic) CJPayChoosePayMethodGroupView *paymentToolGroupView;
@property (retain, nonatomic) CJPayChoosePayMethodGroupView *financeChannelGroupView;
@property (retain, nonatomic) CJPayChoosePayMethodGroupView *combinePayGroupView;
@property (nonatomic) unsigned long long status;
@property (nonatomic) long long scene;

- (void)p_clickConfirmButton;
- (void)p_didSelectPayMethod:(id)a0 loadingView:(id)a1;
- (void)p_setUnfoldBtnText;
- (BOOL)p_isCalculateFoldButtonHeight;
- (id)p_confirmBtnAttrStrWithText:(id)a0 standardAmount:(id)a1 crossedAmount:(id)a2;
- (void)p_clickUnfoldButton;
- (void)updateViewStatus:(unsigned long long)a0 withModels:(id)a1 extraAnimationBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)refreshSelectedMethod:(id)a0;
- (void)refreshPayAgainDisplayInfo:(id)a0;
- (void)p_updateMethodGroupView;
- (void)p_updateConfirmButtonTextWithConfig:(id)a0;
- (id)p_getGroupViewByModel:(id)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end

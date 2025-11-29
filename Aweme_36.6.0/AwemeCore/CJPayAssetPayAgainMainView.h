@class NSMutableDictionary, UILabel, CJPayPayAgainDisplayInfo, NSMutableArray, CJPayStandardButton, UIView, CJPayStandardBubbleView, UIScrollView, CJPayTextArrowView, CJPayAssetPayMethodListManager, CJPayPayAgainMainViewModel, NSArray, UIImageView;
@protocol CJPayAssetContextStoreDelegate;

@interface CJPayAssetPayAgainMainView : UIView

@property (retain, nonatomic) CJPayPayAgainMainViewModel *model;
@property (retain, nonatomic) CJPayPayAgainDisplayInfo *payAgainDisplayInfo;
@property (copy, nonatomic) NSArray *groupViewModels;
@property (nonatomic) BOOL isShowedButtonTips;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) CJPayTextArrowView *unfoldBtnView;
@property (retain, nonatomic) CJPayStandardButton *confirmButton;
@property (retain, nonatomic) UIView *popupContentView;
@property (retain, nonatomic) UIImageView *popupViewIconImageView;
@property (retain, nonatomic) UILabel *popupViewLabel;
@property (retain, nonatomic) UIView *buttonTopDescContentView;
@property (retain, nonatomic) UILabel *buttonTopDescLabel;
@property (retain, nonatomic) CJPayStandardBubbleView *bubbleView;
@property (retain, nonatomic) NSMutableArray *showGroupViews;
@property (retain, nonatomic) NSMutableDictionary *methodGroupViews;
@property (retain, nonatomic) CJPayAssetPayMethodListManager *assetListManager;
@property (nonatomic) unsigned long long status;
@property (nonatomic) long long scene;
@property (weak, nonatomic) id<CJPayAssetContextStoreDelegate> contextDelegate;

- (id)initWithModel:(id)a0 manager:(id)a1;
- (void)p_clickConfirmButton;
- (void)p_didSelectPayMethod:(id)a0 loadingView:(id)a1;
- (void)p_setUnfoldBtnText;
- (void)p_updateMethodGroupView:(BOOL)a0;
- (void)p_updateConfirmButtonTopDescWithConfig:(id)a0;
- (void)updateConfirmButtonTextWithConfig:(id)a0;
- (BOOL)p_isCalculateFoldButtonHeight;
- (id)p_getAssetGroupViewByModel:(id)a0;
- (id)p_confirmBtnAttrStrWithText:(id)a0 standardAmount:(id)a1 crossedAmount:(id)a2;
- (void)p_updatePayAgainDisplayInfoPopupView:(BOOL)a0;
- (id)p_bubbleViewContentColor;
- (void)p_clickUnfoldButton;
- (void)updateViewStatus:(unsigned long long)a0 withModels:(id)a1 extraAnimationBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)refreshSelectedMethod:(id)a0;
- (void)refreshPayAgainDisplayInfo:(id)a0;
- (void)p_setupUI;
- (void)scrollToTop;
- (void).cxx_destruct;

@end

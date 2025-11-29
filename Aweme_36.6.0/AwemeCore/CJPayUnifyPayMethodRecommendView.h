@class UIImageView, CJPayButton, CJPayStandardTagContainerView, CJPayDefaultChannelShowConfig, CJPayLabel;

@interface CJPayUnifyPayMethodRecommendView : UIView

@property (retain, nonatomic) UIImageView *recommendIcon;
@property (retain, nonatomic) CJPayButton *recommendButton;
@property (retain, nonatomic) CJPayStandardTagContainerView *voucherTagContainer;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentConfig;
@property (retain, nonatomic) CJPayLabel *recommendTitle;
@property (retain, nonatomic) CJPayLabel *recommendMethodTitle;
@property (nonatomic) BOOL enableGlobalClick;
@property (copy, nonatomic) id /* block */ clickedRecommendViewBlock;

- (void)p_recommendButtonTapped;
- (id)standardAssetVoucherTagList;
- (BOOL)hasShowVoucherTag;
- (BOOL)p_standardVoucherTagShouldWrapLine;
- (void)updateRecommendViewWithModel:(id)a0 withConfig:(id)a1;
- (void)p_setupVoucherTagsUI;
- (double)p_voucherTagMaxWidth:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end

@class IESLLPOIDetailSummaryConfig, IESLLModernPOIDetailCollectButton, UILabel, NSMutableArray, UIView;
@protocol IESLLPOIDetailSummaryViewDelegate;

@interface IESLLPOIDetailSummaryView : UIView

@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UILabel *businessHourLabel;
@property (retain, nonatomic) IESLLModernPOIDetailCollectButton *collectButton;
@property (retain, nonatomic) UILabel *visitCountLabel;
@property (retain, nonatomic) UILabel *subTypeLabel;
@property (retain, nonatomic) NSMutableArray *detailViews;
@property (retain, nonatomic) UIView *topAnchorView;
@property (nonatomic) long long detailViewOptions;
@property (retain, nonatomic) IESLLPOIDetailSummaryConfig *config;
@property (weak, nonatomic) id<IESLLPOIDetailSummaryViewDelegate> delegate;
@property (readonly, nonatomic) unsigned int enableFunctions;
@property (readonly, nonatomic) unsigned long long collectStyle;

+ (double)heightForPOI:(id)a0 config:(id)a1;
+ (id)p_formattedCostForCost:(double)a0;
+ (double)poiDetailSummaryCellVerticalSpace;
+ (id)poiAttrTitleWithPoiName:(id)a0 isForDisplay:(BOOL)a1;
+ (double)poiTitleLabelMaxWidthWithConfig:(id)a0;
+ (id)poiAttrBusinessHourWithBusinessHour:(id)a0 isForDisplay:(BOOL)a1;
+ (BOOL)enableBusinessHour:(id)a0 functions:(unsigned int)a1;
+ (long long)p_optionsForDetailViewsToAddForPOIDetail:(id)a0 functions:(unsigned int)a1;
+ (double)poiDetailSummaryDetailViewHeight;
+ (BOOL)enableBottomCollectionWithConfig:(id)a0;
+ (double)poiDetailSummaryBottomCollectionViewHeight;
+ (BOOL)enableTopRightCollectionWithConfig:(id)a0;
+ (struct CGSize { double x0; double x1; })topRightCollectButtonContentSizeOfStyle:(unsigned long long)a0 isCollected:(BOOL)a1;
+ (double)maxWidthTopRightCollectButtonContentSizeOfStyle:(unsigned long long)a0;
+ (id)detailLabelForText:(id)a0;
+ (id)p_costStringForPOIDetail:(id)a0;
+ (id)poiTitleFont;
+ (id)p_detailLabelsTextFont;
+ (double)p_detailLabelWidthForText:(id)a0;
+ (BOOL)p_hasValidCostForPOI:(id)a0;
+ (BOOL)p_shouldSetupCollectButton;
+ (BOOL)enableCollectWithFunctions:(unsigned int)a0;
+ (id)poiTitleAttributes:(BOOL)a0;
+ (id)poiBusinessHourFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_lastCharacterFrameWithPoiDetail:(id)a0 config:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)handleShare;
- (void)configureWithPOI:(id)a0;
- (void)handleCollect;
- (void)p_setupUIWithPOIDetail:(id)a0;
- (void)p_setupTopRightCollectButtonWithPOIDetail:(id)a0;
- (void)p_setupPOINameLabelWithPOIDetail:(id)a0;
- (void)p_setupPOIBusinessHourLabelWithPOIDetail:(id)a0;
- (void)p_setupSubTypeViewWithPOIDetail:(id)a0;
- (void)p_setupVisitCountViewWithPOIDetail:(id)a0;
- (void)p_setupCostViewWithPOIDetail:(id)a0;
- (void)p_setupBottomButtonWithPOIDetail:(id)a0;
- (void)p_addLayoutConstraints;
- (BOOL)p_needAdjustSubTypeLabelToRight;
- (void)poiNameLabelLongTap:(id)a0;
- (void).cxx_destruct;

@end

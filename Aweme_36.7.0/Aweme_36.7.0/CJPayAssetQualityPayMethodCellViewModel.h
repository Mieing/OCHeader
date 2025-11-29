@class CJPayDefaultChannelShowConfig, NSString, CJPayAssetQualityPayMethodCellUILayoutConfig;

@interface CJPayAssetQualityPayMethodCellViewModel : CJPayBaseListViewModel

@property (retain, nonatomic) CJPayAssetQualityPayMethodCellUILayoutConfig *layoutConfig;
@property (nonatomic) BOOL enableEProjectOptimize;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (nonatomic) double viewWidth;
@property (nonatomic) BOOL needAddTopLine;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (nonatomic) BOOL forceDisable;
@property (nonatomic) BOOL isUsePlusXVoucher;
@property (copy, nonatomic) NSString *retainVoucherScene;
@property (copy, nonatomic) NSString *forceDisableReason;
@property (nonatomic) BOOL isFromCombinePay;
@property (nonatomic) BOOL isCombinePayDetailStatus;
@property (nonatomic) BOOL needShowArrowWhenCombineDetailStatus;
@property (nonatomic) BOOL forceHiddenVoucherTag;
@property (nonatomic) BOOL hasTrackVoucherTagShow;

- (BOOL)isAssetEnable;
- (Class)getViewClass;
- (id)configSubTitle;
- (id)buildRecommendSubTitleAttributeItems;
- (id)assetVoucherTagList;
- (long long)subContentCount;
- (BOOL)hasShowDescTitle;
- (double)topMarginHeight;
- (id)combineAmountStr;
- (id)standardAssetVoucherTagList;
- (BOOL)hasShowSubAssets;
- (BOOL)hasShowSubTitle;
- (BOOL)hasShowVoucherTag;
- (BOOL)voucherTagShouldWrapLine;
- (double)rightTipsMsgShowWidth;
- (double)voucherTagMaxWidth:(BOOL)a0;
- (id)configDescTitle;
- (id)subAssetInfos;
- (BOOL)p_standardVoucherTagShouldWrapLine;
- (BOOL)p_voucherTagShouldWrapLine;
- (BOOL)needShowIconTip;
- (BOOL)needShowCombineDetailAmount;
- (void).cxx_destruct;
- (id)init;
- (id)cellReuseIdentifier;
- (double)viewHeight;
- (id)topMarginColor;

@end

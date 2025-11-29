@class NSString, CJPayUnifyPayMethodListCellUILayoutConfig, CJPayDefaultChannelShowConfig;
@protocol CJPayAssetContextStoreDelegate;

@interface CJPayUnifyPayMethodListCellViewModel : CJPayBaseListViewModel

@property (retain, nonatomic) CJPayUnifyPayMethodListCellUILayoutConfig *layoutConfig;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (nonatomic) double viewWidth;
@property (nonatomic) BOOL needAddTopLine;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (copy, nonatomic) id /* block */ appearBlock;
@property (nonatomic) BOOL forceDisable;
@property (nonatomic) BOOL forceHiddenSubTitle;
@property (nonatomic) BOOL isUsePlusXVoucher;
@property (copy, nonatomic) NSString *retainVoucherScene;
@property (copy, nonatomic) NSString *forceDisableReason;
@property (nonatomic) BOOL isUnifyOptStyle;
@property (weak, nonatomic) id<CJPayAssetContextStoreDelegate> contextDelegate;
@property (nonatomic) BOOL isFromCombinePay;
@property (nonatomic) long long combineAssetIndex;
@property (nonatomic) BOOL isCombinePayDetailStatus;
@property (nonatomic) BOOL needShowArrowWhenCombineDetailStatus;
@property (nonatomic) BOOL forceHiddenVoucherTag;
@property (nonatomic) BOOL hasTrackVoucherTagShow;

- (BOOL)isAssetEnable;
- (Class)getViewClass;
- (id)configSubTitle;
- (id)buildRecommendSubTitleAttributeItems;
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
- (BOOL)needShowIconTip;
- (BOOL)needShowCombineDetailAmount;
- (double)subTitleMaxWidth;
- (void).cxx_destruct;
- (id)cellReuseIdentifier;
- (double)viewHeight;
- (id)topMarginColor;

@end

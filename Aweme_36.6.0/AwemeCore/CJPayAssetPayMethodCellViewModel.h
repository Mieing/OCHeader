@class NSString, CJPayDefaultChannelShowConfig;

@interface CJPayAssetPayMethodCellViewModel : CJPayBaseListViewModel

@property (retain, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (nonatomic) BOOL needAddTopLine;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (copy, nonatomic) id /* block */ clickedSelectionItemBlock;
@property (nonatomic) BOOL isFromCombinePay;
@property (nonatomic) BOOL isCombinePayDetailStatus;
@property (nonatomic) BOOL forceDisable;
@property (nonatomic) BOOL isUsePlusXVoucher;
@property (nonatomic) BOOL forceHiddenVoucherTag;
@property (nonatomic) BOOL isSelectionVoucherOpened;
@property (copy, nonatomic) NSString *retainVoucherScene;
@property (copy, nonatomic) NSString *forceDisableReason;

- (id)configTitle;
- (BOOL)isAssetEnable;
- (Class)getViewClass;
- (id)configSubTitle;
- (id)buildRecommendSubTitleAttributeItems;
- (id)assetVoucherTagList;
- (BOOL)needShowSelectionVoucherItem;
- (long long)subContentCount;
- (BOOL)hasSubAssetInfo;
- (BOOL)hasShowDescTitle;
- (BOOL)currentAssetInfoIsEnable;
- (BOOL)hasShowDiscountTag;
- (double)topMarginHeight;
- (void).cxx_destruct;
- (id)cellReuseIdentifier;
- (double)viewHeight;
- (id)topMarginColor;

@end

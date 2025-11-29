@class NSString, CJPayDefaultChannelShowConfig;

@interface CJPayDyPayQualityMethodCellViewModel : CJPayBaseListViewModel <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (nonatomic) BOOL needAddTopLine;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (nonatomic) BOOL isDeduct;
@property (nonatomic) BOOL forceShowRightArrow;
@property (nonatomic) BOOL forceShowSelected;
@property (nonatomic) BOOL isCombinePayDetailStatus;
@property (nonatomic) BOOL needShowArrowWhenCombineDetailStatus;
@property (nonatomic) BOOL isResignedBankCardCanSelect;
@property (nonatomic) BOOL hasRetain;
@property (nonatomic) BOOL usePlusXData;
@property (nonatomic) BOOL hasChoiceChanged;
@property (copy, nonatomic) NSString *combineAmountStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getViewClass;
- (long long)subContentCount;
- (BOOL)hasShowDescTitle;
- (BOOL)hasShowDiscountTag;
- (double)topMarginHeight;
- (BOOL)hasShowSubTitle;
- (BOOL)needShowCombineDetailAmount;
- (id)bottomMarginColor;
- (id)getShowInfoModel;
- (BOOL)hasDiscountTagWrapLine;
- (BOOL)showArrowWhenCombineDetailStatus;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (double)viewHeight;
- (id)topMarginColor;

@end

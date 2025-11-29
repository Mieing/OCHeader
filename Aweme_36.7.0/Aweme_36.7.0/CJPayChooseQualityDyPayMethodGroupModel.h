@class NSString, CJPayAssetSelectPageGroupEnhanceInfo, NSArray, NSDictionary;

@interface CJPayChooseQualityDyPayMethodGroupModel : NSObject

@property (nonatomic) long long methodGroupType;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *methodGroupTitle;
@property (retain, nonatomic) CJPayAssetSelectPageGroupEnhanceInfo *groupEnhanceInfo;
@property (copy, nonatomic) NSString *recAreaGuideTitle;
@property (copy, nonatomic) NSString *creditPayDesc;
@property (nonatomic) long long displayNewBankCardCount;
@property (copy, nonatomic) NSArray *methodList;
@property (copy, nonatomic) NSString *addBankCardFoldDesc;
@property (copy, nonatomic) NSArray *subPayTypeIndexList;
@property (nonatomic) BOOL isPayAgainScene;
@property (nonatomic) BOOL isFromCombinePay;
@property (nonatomic) BOOL isCombinePayDetailStatus;
@property (nonatomic) BOOL isResignedBankCardCanSelect;
@property (nonatomic) long long assetListScene;
@property (nonatomic) long long displayMethodCount;
@property (copy, nonatomic) NSArray *disableMethodList;
@property (copy, nonatomic) NSDictionary *disableReasonMap;
@property (copy, nonatomic) NSString *topRightButtonText;

- (id)methodGroupTypeStr;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

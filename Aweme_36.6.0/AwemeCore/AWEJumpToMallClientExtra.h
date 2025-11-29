@class AWEECEnterMallConfigModel, NSArray, NSString, NSDictionary, AWEJumpToMallImplicitActionModel, NSNumber, AWEECBubbleInfo;

@interface AWEJumpToMallClientExtra : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSNumber *productId;
@property (copy, nonatomic) NSArray *sameGoods;
@property (copy, nonatomic) NSString *sameGoodsStr;
@property (copy, nonatomic) NSNumber *videoType;
@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) NSString *sameSceneId;
@property (copy, nonatomic) NSString *sameBlockName;
@property (nonatomic) BOOL isNewVersion;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *afterVideoOperationWord;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL leftSlideNoAction;
@property (copy, nonatomic) AWEJumpToMallImplicitActionModel *leftSlideImplicitionAction;
@property (copy, nonatomic) NSString *productCategoryMap;
@property (nonatomic) BOOL supportSearchPage;
@property (nonatomic) BOOL supportSearchCard;
@property (copy, nonatomic) NSString *searchSchema;
@property (copy, nonatomic) NSNumber *nMin;
@property (retain, nonatomic) AWEECBubbleInfo *bubbleInfo;
@property (retain, nonatomic) NSArray *interestAction;
@property (copy, nonatomic) NSString *isHideHeaderCard;
@property (copy, nonatomic) NSString *deliveryType;
@property (copy, nonatomic) NSString *similarGoods;
@property (copy, nonatomic) NSString *mallSupportType;
@property (copy, nonatomic) NSString *queryId;
@property (retain, nonatomic) AWEECEnterMallConfigModel *leftSlideToMallConfig;
@property (retain, nonatomic) NSDictionary *interestMap;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestActionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

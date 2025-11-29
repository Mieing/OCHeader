@class NSString, NSArray, AWEJumpToMallImplicitActionModel, NSNumber;

@interface AWEJumpToMallConfigModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL isAction;
@property (nonatomic) long long interestLevel;
@property (copy, nonatomic) NSString *sameBlockName;
@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *trafficFrom;
@property (copy, nonatomic) NSString *isStronglyRecommend;
@property (nonatomic) BOOL supportTab;
@property (nonatomic) BOOL supportLeftSlide;
@property (nonatomic) BOOL requireNoOrder;
@property (nonatomic) long long second;
@property (copy, nonatomic) NSArray *finishLeadConfig;
@property (nonatomic) BOOL hasOrdered;
@property (nonatomic) BOOL shouldWaitCommentClose;
@property (copy, nonatomic) NSArray *implicitionAction;
@property (copy, nonatomic) AWEJumpToMallImplicitActionModel *currentiImplicitionAction;
@property (nonatomic) BOOL supportPage;
@property (copy, nonatomic) NSNumber *imagePlayNum;
@property (nonatomic) BOOL supportLeftSlideEnterStyle;
@property (nonatomic) BOOL needReq;
@property (copy, nonatomic) NSString *pitayaProductId;
@property (copy, nonatomic) NSArray *pitayaSameGoods;
@property (copy, nonatomic) NSString *pitayaSameGoodsStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implicitionActionJSONTransformer;
+ (id)finishLeadConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

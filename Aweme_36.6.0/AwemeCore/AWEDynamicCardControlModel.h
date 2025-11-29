@class NSString, NSDictionary, AWEAwemeModel, NSArray;

@interface AWEDynamicCardControlModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long minDiffToLastDCard;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *pageID;
@property (retain, nonatomic) AWEAwemeModel *fallbackAweme;
@property (nonatomic) unsigned long long insertMode;
@property (nonatomic) unsigned long long insertPosition;
@property (copy, nonatomic) NSDictionary *removeConditions;
@property (copy, nonatomic) NSDictionary *insertConditions;
@property (copy, nonatomic) NSArray *freStrategies;
@property (copy, nonatomic) NSArray *concernDCardTypeList;
@property (readonly, nonatomic) double notShowMaxAliveTime;
@property (nonatomic) long long currentDiffPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)freStrategiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)fetchDCardRemoveCondition;
- (unsigned long long)fetchDCardInsertCondition;
- (void).cxx_destruct;

@end

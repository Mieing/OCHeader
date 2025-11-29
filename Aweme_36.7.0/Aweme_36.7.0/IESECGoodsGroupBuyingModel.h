@class NSString, NSArray, NSNumber;

@interface IESECGoodsGroupBuyingModel : MTLModel <IESECGoodsPriceLabelModel, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSArray *groupBuyerList;
@property (retain, nonatomic) NSNumber *joined;
@property (retain, nonatomic) NSNumber *groupSize;
@property (retain, nonatomic) NSNumber *groupingPercent;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *activityID;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupBuyerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)minPrice;
- (id)maxPrice;
- (BOOL)hasGapPrice;
- (id)groupBuyingModelWithNewInfo:(id)a0;
- (id)price;
- (void).cxx_destruct;
- (id)init;

@end

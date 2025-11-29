@class NSArray, NSNumber, NSString;

@interface IESECGoodsNGroupBuyModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) double endTime;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSArray *groupBuyerList;
@property (retain, nonatomic) NSNumber *joined;
@property (retain, nonatomic) NSNumber *groupSize;
@property (retain, nonatomic) NSNumber *needNum;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *identity;
@property (retain, nonatomic) NSString *rule;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupBuyerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

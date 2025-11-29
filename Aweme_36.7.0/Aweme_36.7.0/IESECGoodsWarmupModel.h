@class NSString;

@interface IESECGoodsWarmupModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *startText;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isOrdered;
@property (nonatomic) long long orderCount;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end

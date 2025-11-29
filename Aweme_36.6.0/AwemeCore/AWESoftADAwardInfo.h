@class NSDictionary, NSString;

@interface AWESoftADAwardInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long coolDownTime;
@property (copy, nonatomic) NSDictionary *aggrInfo;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSNumber, NSArray, NSString;

@interface IESLLPOIRepeatEventRuleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *timePeriod;
@property (retain, nonatomic) NSArray *blackList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

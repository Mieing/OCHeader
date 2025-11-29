@class NSString, NSArray;

@interface AWEECCpsTrackerParamValidationConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *checkType;
@property (copy, nonatomic) NSString *regex;
@property (retain, nonatomic) NSArray *length;
@property (retain, nonatomic) NSArray *ruleEnum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

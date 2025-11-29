@class NSArray, NSDictionary, NSString;

@interface AWEUGPendantConfigExemptPeriod : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *period;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

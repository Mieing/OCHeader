@class NSNumber, NSArray, NSString;

@interface BDUGLuckyPrefetchConfigRuleItem : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *enableInject;
@property (retain, nonatomic) NSNumber *needPrefetchData;
@property (copy, nonatomic) NSArray *settingsKey;
@property (copy, nonatomic) NSArray *storagesKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

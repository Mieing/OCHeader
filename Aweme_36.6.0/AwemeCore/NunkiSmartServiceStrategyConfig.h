@class NSDictionary, NSString;

@interface NunkiSmartServiceStrategyConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *configMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

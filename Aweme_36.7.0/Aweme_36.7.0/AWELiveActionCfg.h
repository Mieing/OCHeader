@class NSDictionary, NSString;

@interface AWELiveActionCfg : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long areaAction;
@property (copy, nonatomic) NSDictionary *actionPrams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

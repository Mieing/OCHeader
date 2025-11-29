@class NSArray, NSString;

@interface AWEPluginSecurityImpl : NSObject <BDPSecurityPluginDelegate>

@property (retain, nonatomic) NSArray *validate_list;
@property (retain, nonatomic) NSArray *free_list;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)preMatchRulesWithAppID:(id)a0;
- (BOOL)checkBridgeCallableWithBridgeContext:(id)a0;
- (void).cxx_destruct;

@end

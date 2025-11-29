@class NSString;

@interface BDPUnisusBaseBundleServiceImpl : NSObject <UnisusBaseBundleServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (BOOL)extractBuiltInBaseBundle:(id)a0 withPresetType:(id)a1;
- (id)getHostLibraConfig;

@end

@class NSString;

@interface AWEAnnieXResourceService : HTSService <AWEAnnieXResourceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPrefixToAk;
+ (id)defaultAkToPrefixList;
+ (Class)aAWELynxCommonAdapterClass;
+ (void)preConfigBDXEnv;

- (id)aAWELynxCommonAdapter;

@end

@class NSString;

@interface AWEConcernGeckoManager : NSObject <AWEConcernGeckoManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlWithChannel:(id)a0 bundleName:(id)a1;
+ (id)taskConfigWithChannel:(id)a0 bundleName:(id)a1;
+ (id)geckoSetting;
+ (id)concernGeckoHostPrefix;
+ (Class)aAWEConcernMutiTargetConfigCommonAdapterClass;
+ (void)loadGeckoResourceWithChannel:(id)a0 fileName:(id)a1 completion:(id /* block */)a2;
+ (void)loadGeckoImageWithChannel:(id)a0 fileName:(id)a1 completion:(id /* block */)a2;

- (id)aAWEConcernMutiTargetConfigCommonAdapter;

@end

@class NSString;

@interface AWEProfileGeckoManager : NSObject <AWEProfileGeckoManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadGeckoImageWithFolder:(id)a0 fileName:(id)a1 completion:(id /* block */)a2;
+ (void)loadGeckoResourceWithFolder:(id)a0 channelName:(id)a1 fileName:(id)a2 completion:(id /* block */)a3;
+ (id)urlWithBundleName:(id)a0 specificChannel:(id)a1;
+ (id)taskConfigWithBundleName:(id)a0 specificChannel:(id)a1;
+ (id)profileGeckoSetting;
+ (id)profileGeckoHostPrefix;
+ (id)profileChannelName;
+ (void)loadGeckoResourceWithFolder:(id)a0 fileName:(id)a1 completion:(id /* block */)a2;


@end

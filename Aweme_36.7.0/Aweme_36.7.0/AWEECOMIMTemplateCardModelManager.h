@class IESForestKit;

@interface AWEECOMIMTemplateCardModelManager : NSObject

@property (retain, nonatomic) IESForestKit *cdnForestKit;

+ (id)templateCardCDNPrefix;
+ (id)templateCardChannel;
+ (id)templateCardModleGeckoChannels;
+ (id)sharedInstance;

- (id)templateCardModleResourceDirectoryPath;
- (void)fetchCDNResourceAsyncWithJsonName:(id)a0 completion:(id /* block */)a1;
- (void)prepareGeckoResource;
- (void).cxx_destruct;
- (id)init;

@end

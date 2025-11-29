@class NSString;
@protocol AWEGurdConfigDelegate;

@interface AWEGurdConfigServiceImpl : NSObject <AWEGurdConfigService>

@property (retain, nonatomic) id<AWEGurdConfigDelegate> configDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setupWithConfigDelegate:(id)a0;
- (id)cacheRootDirectory;
- (void)registerPrefetchChannels:(id)a0;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setupIfNeeded;

@end

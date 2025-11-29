@class NSString;

@interface AWEPOIOfflineService : HTSService <AWEPOIOfflineService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)preloadOfflineGeckoWithChannelName:(id)a0 urlString:(id)a1;
- (id)init;
- (id)shared;

@end

@class NSString;

@interface AWEVideoPreloadManager : NSObject <AWEVideoPreloadManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)cancelVideosPreloadWithGroup:(id)a0;
- (void)preloadVideo:(id)a0 withGroup:(id)a1;

@end

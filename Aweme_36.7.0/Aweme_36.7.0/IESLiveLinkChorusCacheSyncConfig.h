@interface IESLiveLinkChorusCacheSyncConfig : NSObject

@property (nonatomic) int maxCacheTimeMs;
@property (nonatomic) long long mode;
@property (nonatomic) int videoFps;

- (id)init;

@end

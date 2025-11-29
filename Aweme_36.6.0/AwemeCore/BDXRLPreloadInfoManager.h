@class NSMutableSet;

@interface BDXRLPreloadInfoManager : NSObject

@property (retain, nonatomic) NSMutableSet *preloadedURLString;
@property (retain, nonatomic) NSMutableSet *preloadedChannel;

- (void)markPreloadChannel:(id)a0;
- (void)markPreloadUrlString:(id)a0;
- (BOOL)isChannelPreloaded:(id)a0;
- (BOOL)isURLStringPreloaded:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

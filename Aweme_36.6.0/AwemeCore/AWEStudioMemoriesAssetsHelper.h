@class NSMutableSet;

@interface AWEStudioMemoriesAssetsHelper : NSObject

@property (retain, nonatomic) NSMutableSet *loadingSet;

+ (id)sharedHelper;

- (void)preloadRemoteVideoIfNeeded:(id)a0;
- (void)preloadWithComposer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

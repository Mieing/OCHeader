@class NSString, TTVideoEngine;

@interface AWEAdLVPlayerPreloader : NSObject <AWEPlayVideoDelegate>

@property (retain, nonatomic) TTVideoEngine *preloadEngine;
@property (retain, nonatomic) NSString *preloadKey;
@property (nonatomic) BOOL isPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearPreloader;
- (void)generatePreloadPlayControllerWithPlayerContext:(id)a0 preloadKey:(id)a1;
- (void).cxx_destruct;

@end

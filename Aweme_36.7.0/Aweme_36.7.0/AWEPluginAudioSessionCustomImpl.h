@class NSString;

@interface AWEPluginAudioSessionCustomImpl : NSObject <BDPHostAudioSessionDelegate>

@property BOOL hostAudioStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)setupObserver;
- (void)handleAWEPlayVideoPlay:(id)a0;
- (void)handleAWEPlayVideoPause:(id)a0;
- (void)setActive:(BOOL)a0 withOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)setActive:(BOOL)a0 completion:(id /* block */)a1;

@end

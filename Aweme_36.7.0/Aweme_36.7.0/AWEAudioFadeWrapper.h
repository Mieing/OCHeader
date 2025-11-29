@interface AWEAudioFadeWrapper : NSObject {
    struct Context { void *x0; struct EngineAudioWrapper *x1; int x2; BOOL x3; } *context;
}

@property (nonatomic) BOOL fadeEnable;

+ (void)setupConfigs;

- (void)setAudioWrapperForEngine:(id)a0;
- (void)clearAudioWrapper;
- (id)init;
- (void)dealloc;

@end

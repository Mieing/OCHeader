@class NSMutableDictionary, NSMutableArray;

@interface WAOpenALManager : NSObject {
    struct ALCdevice_struct { } *device;
    NSMutableDictionary *buffers;
    NSMutableArray *contexts;
}

+ (id)shareInstance;

- (id)init;
- (void)beginInterruption:(struct ALCcontext_struct { } *)a0;
- (void)endInterruption:(struct ALCcontext_struct { } *)a0;
- (void)releaseContext:(struct ALCcontext_struct { } *)a0;
- (void)__releaseContext:(struct ALCcontext_struct { } *)a0;
- (struct ALCcontext_struct { } *)createContext;
- (struct ALCcontext_struct { } *)currentContext;
- (void)setCurrentContext:(struct ALCcontext_struct { } *)a0;
- (id)cachedAudio:(id)a0;
- (void)addCachedAudio:(id)a0 path:(id)a1 audio:(id)a2;
- (void)removeCachedAudio:(id)a0 path:(id)a1;
- (id)getCachedAudio:(id)a0 path:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end

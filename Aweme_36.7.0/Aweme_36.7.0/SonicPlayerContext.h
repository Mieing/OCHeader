@class AVAsset, EAGLContext;
@protocol SonicPlayer;

@interface SonicPlayerContext : NSObject {
    id<SonicPlayer> player_;
    AVAsset *asset_;
    EAGLContext *egl_context_;
    unsigned int width_;
    unsigned int height_;
    int rotation_;
}

- (BOOL)updateTexture:(struct __CVBuffer **)a0;
- (BOOL)setSource:(id)a0 withBlock:(id /* block */)a1;
- (long long)getRotation;
- (BOOL)setCurrentTime:(double)a0;
- (void).cxx_destruct;
- (double)getDuration;
- (BOOL)setVolume:(float)a0;
- (BOOL)dispose;
- (BOOL)setLooping:(BOOL)a0;
- (id)initWithPlayer:(id)a0;
- (double)getCurrentTime;
- (BOOL)resumePlayback;
- (BOOL)startPlayback;
- (BOOL)pausePlayback;
- (unsigned int)getWidth;
- (unsigned int)getHeight;

@end

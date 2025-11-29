@class MMAnimatedImageDecoder, UIImageView, MMAnimatedImagePlayConfig, UIImage, NSMutableArray;

@interface MMAnimatedImagePlayTask : NSObject {
    unsigned long long m_timeTickCount;
    BOOL m_isUpdating;
    BOOL m_needUpdateFrame;
    NSMutableArray *m_frameCache;
    double m_maxCacheWidth;
    int m_currentFrameId;
    int m_totalFrameCount;
    double m_currentDuration;
    UIImageView *m_imageView;
    MMAnimatedImagePlayConfig *m_config;
    unsigned int m_remainingTimes;
    UIImage *m_firstFrameImage;
    BOOL m_needRewind;
}

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) BOOL stopped;
@property (readonly, nonatomic) MMAnimatedImageDecoder *decoder;
@property (readonly, nonatomic) unsigned long long playMode;

- (id)initWithDecoder:(id)a0 imageView:(id)a1 config:(id)a2 maxCacheSize:(double)a3;
- (id)init;
- (void)removeImageView;
- (void)removePlayObserver;
- (void)forceResetWithTickCount:(unsigned long long)a0;
- (void)updateWithTickCount:(unsigned long long)a0;
- (void)seekToNextFrameIfNeeded;
- (void)seekToNextFrameWithDecoder:(id)a0 async:(BOOL)a1;
- (void)onSeekNextFrameFinished:(BOOL)a0;
- (void)updateFrame;
- (void).cxx_destruct;

@end

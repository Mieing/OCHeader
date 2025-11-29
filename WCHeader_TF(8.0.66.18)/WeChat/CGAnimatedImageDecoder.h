@class NSString, UIImage;

@interface CGAnimatedImageDecoder : MMAnimatedImageDecoder {
    BOOL m_hasDecodeOneLoop;
    BOOL m_isSingleFrame;
    int m_frameCount;
    int m_currentFrameId;
    int m_decodedLoopCnt;
    NSString *m_cpKey;
    UIImage *m_currentFrameImage;
    double m_currentFrameDuration;
    struct CGSize { double width; double height; } m_imageSize;
}

@property (nonatomic) struct CGImageSource { } *source;
@property (nonatomic) long long orientation;

- (void)dealloc;
- (id)initWithData:(id)a0 config:(id)a1;
- (BOOL)seekToNextFrame;
- (BOOL)rewind;
- (void)setScale:(double)a0;
- (void)releaseSource;
- (id)cpKey;
- (id)currentFrameImage;
- (double)currentFrameDuration;
- (int)frameCount;
- (struct CGSize { double x0; double x1; })imageSize;
- (int)currentFrameId;
- (BOOL)hasDecodeOneLoop;
- (BOOL)isSingleFrame;
- (int)decodedLoopCnt;
- (void).cxx_destruct;

@end

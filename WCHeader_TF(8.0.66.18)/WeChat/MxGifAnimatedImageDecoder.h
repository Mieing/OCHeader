@class NSData, NSString, UIImage;

@interface MxGifAnimatedImageDecoder : MMAnimatedImageDecoder {
    void *m_gifImage;
    NSData *m_gifData;
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

+ (id)cgImageWithData:(id)a0 maxWidth:(unsigned int)a1 scale:(double)a2;
+ (double)frameDurationInSecondForDuration:(double)a0;
+ (int)frameCountForImageData:(id)a0;

- (void)dealloc;
- (id)initWithData:(id)a0 config:(id)a1;
- (BOOL)rewind;
- (BOOL)seekToNextFrame;
- (id)currentFrameImage;
- (int)frameCount;
- (void)setScale:(double)a0;
- (BOOL)configDecoderWithGifData:(id)a0 maxWidth:(unsigned int)a1;
- (id)cpKey;
- (double)currentFrameDuration;
- (struct CGSize { double x0; double x1; })imageSize;
- (int)currentFrameId;
- (BOOL)hasDecodeOneLoop;
- (BOOL)isSingleFrame;
- (int)decodedLoopCnt;
- (void).cxx_destruct;

@end

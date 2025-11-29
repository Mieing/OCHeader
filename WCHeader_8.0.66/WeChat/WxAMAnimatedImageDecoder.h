@class NSString, MMAnimatedImageDecodeConfig, NSData, UIImage;

@interface WxAMAnimatedImageDecoder : MMAnimatedImageDecoder {
    NSData *m_data;
    void *m_decoder;
    struct StWxAMFrame { char *x0[4]; unsigned long long x1[4]; int x2; int x3; int x4; int x5; int x6; int x7; char *x8; int x9; int x10; char *x11; } *m_curWxFrame;
    unsigned int m_maxWidth;
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

@property (retain, nonatomic) MMAnimatedImageDecodeConfig *config;

+ (BOOL)isWxAMData:(id)a0;
+ (struct CGSize { double x0; double x1; })imageSizeWithWxAMData:(id)a0;
+ (int)frameCountForImageData:(id)a0;
+ (id)imageWithWxAMData:(id)a0 scale:(double)a1;
+ (id)imageWithWxAMData:(id)a0 scale:(double)a1 config:(id)a2;
+ (double)secondsOfFrame:(struct StWxAMFrame { char *x0[4]; unsigned long long x1[4]; int x2; int x3; int x4; int x5; int x6; int x7; char *x8; int x9; int x10; char *x11; } *)a0;
+ (id)imageOfFrame:(struct StWxAMFrame { char *x0[4]; unsigned long long x1[4]; int x2; int x3; int x4; int x5; int x6; int x7; char *x8; int x9; int x10; char *x11; } *)a0 scale:(double)a1 shouldShowWxamMark:(BOOL)a2;

- (void)dealloc;
- (id)initWithData:(id)a0 config:(id)a1;
- (BOOL)rewind;
- (BOOL)seekToNextFrame;
- (id)currentFrameImage;
- (void)setScale:(double)a0;
- (void)uninitDecoder;
- (BOOL)configDecoderWithWXGifData:(id)a0;
- (id)cpKey;
- (double)currentFrameDuration;
- (int)frameCount;
- (struct CGSize { double x0; double x1; })imageSize;
- (int)currentFrameId;
- (BOOL)hasDecodeOneLoop;
- (BOOL)isSingleFrame;
- (int)decodedLoopCnt;
- (void).cxx_destruct;

@end

@class NSRecursiveLock, NSString, NSInvocationOperation, AVURLAsset;
@protocol MMovieDecoderDelegate;

@interface MMovieDecoder : NSObject {
    NSString *m_url;
    AVURLAsset *m_asset;
    NSInvocationOperation *m_playThread;
    NSRecursiveLock *m_threadLock;
    BOOL m_shouldDecodeVideo;
    BOOL m_shouldDecodeAudio;
    BOOL m_shouldSleepForEveryFrame;
    unsigned long long m_pixelFormatType;
}

@property (weak, nonatomic) id<MMovieDecoderDelegate> delegate;
@property (nonatomic) int decodeMode;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;
@property (nonatomic) BOOL audioOnly;
@property (retain, nonatomic) NSString *cpKey;

+ (id)shareOperationQueue;

- (id)init;
- (void)dealloc;
- (void)releaseThread;
- (void)load:(id)a0;
- (long long)videoOrientation;
- (long long)imageOrientation;
- (void)start;
- (void)pause;
- (void)threadFunc;
- (void).cxx_destruct;

@end

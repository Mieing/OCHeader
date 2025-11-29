@class NSString, NSRecursiveLock;
@protocol MMConfSDKVideoHWencDelegate;

@interface MMConfSDKVideoHWenc : NSObject {
    int mStatus;
    int mEncScene;
    BOOL mIsReuseEnc;
    int mReinitGap;
    int mCurEncIdx;
    int mEncFrmCount;
    int mEncErrCount;
    int mEncNoRtnCount;
    int mEncNoFrmCount;
    unsigned int muiHWEncExceptionMask;
    int mIreqFlag;
    BOOL mIsScreen;
    struct OpaqueVTCompressionSession { } *mEncodingSession;
    struct opaqueCMFormatDescription { } *mFormat;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } *mTimingInfo;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mLock;
    struct BufNode { struct opaqueCMSampleBuffer *x0; struct BufNode *x1; int x2; } *mQHead;
    struct BufNode { struct opaqueCMSampleBuffer *x0; struct BufNode *x1; int x2; } *mQTail;
    unsigned long long mFirstFrmTs;
    unsigned long long mLastFrmTs;
}

@property (nonatomic) int mCurCodec;
@property (nonatomic) int mFPS;
@property (nonatomic) int mBR;
@property (nonatomic) int mWidth;
@property (nonatomic) int mHeight;
@property (nonatomic) int mKeyFrmInterval;
@property (nonatomic) int mMinQP;
@property (weak, nonatomic) NSString *mErrorStr;
@property (weak, nonatomic) id<MMConfSDKVideoHWencDelegate> mHWEncDelegate;
@property (retain, nonatomic) NSRecursiveLock *mVideoHWEncLock;

+ (struct IWXConfService { void /* function */ **x0; } *)getConfInst;

- (void)ClearFrameQueue;
- (void)InitAllMembers;
- (id)init;
- (void)setHWEncBR_Common:(int)a0 bLock:(BOOL)a1;
- (void)setHWEncBR:(int)a0;
- (void)setHWEncFPS_Common:(int)a0 bLock:(BOOL)a1;
- (void)setHWEncFPS:(int)a0;
- (void)setHWEncKeyRequest:(int)a0;
- (void)setHWEncMinQP:(int)a0;
- (BOOL)GetAndSendParaSet:(struct opaqueCMSampleBuffer { } *)a0;
- (void)GetAndSendHWStream:(struct opaqueCMSampleBuffer { } *)a0 isKeyFrame:(BOOL)a1;
- (int)initEncode:(int)a0 width:(int)a1 height:(int)a2 bitrate:(int)a3 framerate:(int)a4 iFrmGap:(int)a5 encIdx:(int)a6 isScreen:(BOOL)a7 encScene:(int)a8;
- (int)encode:(struct __CVBuffer { } *)a0;
- (void)endEncode;
- (void)forcePopFrame;
- (void).cxx_destruct;

@end

@class NSString, NSRecursiveLock;
@protocol MMConfSDKVideoHWdecDelegate;

@interface MMConfSDKVideoHWdec : NSObject {
    int mStatus;
    BOOL mIsReuseDec;
    int mKeyFrmCntSvr;
    int mKeyFrmCntInWait;
    int mAllFrmCntInWait;
    int mDecErrCount;
    struct opaqueCMFormatDescription { } *m_videoFormatDes;
    struct OpaqueVTDecompressionSession { } *m_session;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } m_avcCData;
    struct OpaqueCMBlockBuffer { } *m_videoBlock;
    struct opaqueCMSampleBuffer { } *m_sampleBuffer;
    int mCodecType;
    int mFormat;
    int mOffset;
    char *mHWYUVbuffer;
    unsigned long long mHWYUVLength;
    int mDecFrmCnt;
}

@property (nonatomic) int mMemberID;
@property (nonatomic) BOOL mCallbackErrorOccured;
@property (weak, nonatomic) NSString *mErrorStr;
@property (weak, nonatomic) id<MMConfSDKVideoHWdecDelegate> mHWDecDelegate;
@property (retain, nonatomic) NSRecursiveLock *mVideoHWDecLock;

+ (struct IWXConfService { void /* function */ **x0; } *)getConfInst;

- (void)InitAllMembers;
- (id)init;
- (void)dealloc;
- (int)createVideoFormatDes:(int)a0 pXPSData:(const char *)a1 dataLen:(int)a2;
- (int)createSampleBufferBlock:(const char *)a0 dataLen:(int)a1;
- (int)decodeOneFrame:(const char *)a0 dataLen:(int)a1;
- (void)RenderImg:(struct __CVBuffer { } *)a0;
- (int)UpdateHWDecSession;
- (void)releaseSampleBufferBlock;
- (int)initDecode:(int)a0;
- (int)decode:(const char *)a0 dataLen:(int)a1 codecType:(int)a2 frameType:(int)a3 format:(int)a4;
- (void)endDecode;
- (BOOL)CanUse;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

@class VEVideoConfig, NSString, HTSVideoData, NSCondition, NSLock, NSMutableArray;
@protocol VEVideoProcessDelegate;

@interface VECompileVTDecoderUnit : NSObject <VEVideoProcessDelegate> {
    struct opaqueCMFormatDescription { } *_vtDesc;
    int _vtcount;
}

@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) struct OpaqueVTDecompressionSession { } *videoDecodeSession;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastVideoFrameTime;
@property (nonatomic) long long status;
@property (nonatomic) BOOL asyncMode;
@property (nonatomic) int maxRefFrames;
@property (nonatomic) int maxVtbCacheSize;
@property (retain, nonatomic) NSLock *frameInfoLock;
@property (retain, nonatomic) NSMutableArray *frameInfoArrays;
@property (retain, nonatomic) NSMutableArray *frameInfoPointers;
@property (nonatomic) int isHDRVideo;
@property (retain, nonatomic) VEVideoConfig *videoConfig;
@property BOOL closedForBackground;
@property (retain, nonatomic) NSCondition *sessionReadyCond;
@property (nonatomic) BOOL isLensFillFrame;
@property (nonatomic) BOOL veabtest_enableAgfxMetal;
@property (weak, nonatomic) id<VEVideoProcessDelegate> videoDownstream;
@property (nonatomic) unsigned long long readerType;
@property (readonly, nonatomic) unsigned int pixelFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainsPointer:(id)a0;
- (void)releaseFrameInfo:(id)a0;
- (void)vtDecodeCallback:(id)a0 flags:(unsigned int)a1 buffer:(struct __CVBuffer { } *)a2;
- (void)decodeFinish;
- (id)getFrameInfo;
- (BOOL)initVTSessions:(id)a0;
- (BOOL)processSampleData:(id)a0;
- (void)flushSession;
- (id)initWithDesc:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)setConfig:(id)a0;
- (void).cxx_destruct;
- (void)enterBackground;
- (id)init;
- (void)enterForeground;
- (void)dealloc;
- (void)closeSession;
- (void)resetSession;
- (BOOL)decode:(id)a0;

@end

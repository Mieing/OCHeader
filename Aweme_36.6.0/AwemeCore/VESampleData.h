@class IESMMSampleBufferInfo, NSString, NSArray, NSData, HTSGLFramebuffer, NSError, IESTrackInfo;

@interface VESampleData : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuf;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuf;
@property (retain, nonatomic) HTSGLFramebuffer *frameBuffer;
@property (retain, nonatomic) NSString *route;
@property (retain, nonatomic) NSArray *vesamples;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) void *pipeline;
@property (retain, nonatomic) id teClip;
@property (nonatomic) BOOL isFromSeek;
@property (nonatomic) BOOL isOutRenderTime;
@property (nonatomic) long long colorPrimaries;
@property (nonatomic) long long transferFunction;
@property (nonatomic) long long ycbcrMatrix;
@property (nonatomic) BOOL isFullRange;
@property (nonatomic) BOOL skipFilters;
@property (nonatomic) BOOL useOriginColorSpace;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) unsigned long long texWrap;
@property (nonatomic) unsigned long long sampleType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } realFramePts;
@property (nonatomic) long long decodeTimeStamp;
@property (nonatomic) struct CGSize { double width; double height; } sampleSize;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) unsigned long long rotationMode;
@property (nonatomic) long long sampleFlag;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct CGSize { double width; double height; } screenshotFrameSize;
@property (nonatomic) double encodeBegin;
@property (retain, nonatomic) IESMMSampleBufferInfo *cameraBufferInfo;
@property (nonatomic) BOOL noNeedLVProcess;
@property (nonatomic) BOOL needResetFilterChain;
@property (retain, nonatomic) IESTrackInfo *trackInfo;
@property (nonatomic) double processStartTime;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ completeBlockWithSurffix;
@property (nonatomic) float delayTime;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *audioBufferList;
@property (nonatomic) int sampleCount;
@property (nonatomic) unsigned int micNullDataSize;
@property (nonatomic) unsigned int bgmNullDataSize;
@property (retain, nonatomic) NSData *ambientViewingEnvironmentData;
@property (retain, nonatomic) NSData *masteringDisplayColorVolumeData;
@property (retain, nonatomic) NSData *contentLightLevelInfoData;
@property (nonatomic) unsigned long long recordBufferType;
@property (nonatomic) BOOL needReleaseCVPixelbuffer;

- (void)fetchColorInfoFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)restoreColorInfoToPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)fetchSEIMessageFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)releaseVESamples;
- (void)fetchColorInfoFromSampleBuffers:(id)a0;
- (id)imageFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)fetchSEIMessageFromSampleBuffers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

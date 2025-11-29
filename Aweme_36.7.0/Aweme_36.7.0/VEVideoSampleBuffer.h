@class HTSGLFramebuffer, VEMattingAlphaData, NSArray, NSString, IESTrackInfo, VEVideoConfig, NSError;

@interface VEVideoSampleBuffer : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (nonatomic) long long srcPtsUs;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } dts;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) BOOL isDifferentVideoAsset;
@property (retain, nonatomic) IESTrackInfo *trackInfo;
@property (retain, nonatomic) VEVideoConfig *config;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long sampleFlag;
@property (retain, nonatomic) HTSGLFramebuffer *frameBuffer;
@property (nonatomic) long long videoDataType;
@property (nonatomic) BOOL isLatestFrame;
@property (retain, nonatomic) VEMattingAlphaData *mattingMaskData;
@property (nonatomic) struct CGSize { double width; double height; } mattingMaskImageSize;
@property (retain, nonatomic) NSArray *matting_rect;
@property (retain, nonatomic) NSString *segmentID;
@property (nonatomic) BOOL packetFlagDiscard;
@property (nonatomic) struct __CVBuffer { } *originalPixelBuffer;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)releasePixelBuffer;

@end

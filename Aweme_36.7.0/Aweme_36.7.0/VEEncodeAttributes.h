@class IESMMObject, VESampleData, HTSGLFramebuffer;
@protocol VEProcessSampleDelegate, VECompileStageProtocol;

@interface VEEncodeAttributes : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (nonatomic) double begin;
@property (nonatomic) long long sampleFlag;
@property (retain, nonatomic) VESampleData *sampleData;
@property (retain, nonatomic) HTSGLFramebuffer *inputFramebuffer;
@property (retain, nonatomic) IESMMObject<VEProcessSampleDelegate, VECompileStageProtocol> *vtUnit;

- (void).cxx_destruct;
- (void)dealloc;

@end

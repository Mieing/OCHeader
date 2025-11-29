@class NSString;

@interface TRTCStreamEncoderParam : NSObject

@property (nonatomic) int videoEncodedWidth;
@property (nonatomic) int videoEncodedHeight;
@property (nonatomic) int videoEncodedFPS;
@property (nonatomic) int videoEncodedGOP;
@property (nonatomic) int videoEncodedKbps;
@property (nonatomic) int audioEncodedSampleRate;
@property (nonatomic) int audioEncodedChannelNum;
@property (nonatomic) int audioEncodedKbps;
@property (nonatomic) int audioEncodedCodecType;
@property (nonatomic) int videoEncodedCodecType;
@property (copy, nonatomic) NSString *videoSeiParams;

- (struct shared_ptr<trtc::StreamEncoderParam> { struct StreamEncoderParam *x0; struct __shared_weak_count *x1; })convertToCppParams;
- (id)init;
- (void).cxx_destruct;

@end

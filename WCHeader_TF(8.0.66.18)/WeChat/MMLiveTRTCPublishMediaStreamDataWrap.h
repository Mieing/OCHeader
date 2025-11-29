@class TRTCStreamEncoderParam, TRTCStreamMixingConfig, TRTCPublishTarget;

@interface MMLiveTRTCPublishMediaStreamDataWrap : NSObject

@property (retain, nonatomic) TRTCPublishTarget *publishTarget;
@property (retain, nonatomic) TRTCStreamEncoderParam *streamEncoderParam;
@property (retain, nonatomic) TRTCStreamMixingConfig *streamMixingConfig;

- (id)initWithPublishTarget:(id)a0 encoderParam:(id)a1 mixingConfig:(id)a2;
- (void).cxx_destruct;

@end

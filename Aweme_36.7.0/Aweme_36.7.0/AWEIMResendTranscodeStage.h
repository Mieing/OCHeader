@class AWEIMVideoTransCoder;

@interface AWEIMResendTranscodeStage : AWEIMStage

@property (retain, nonatomic) AWEIMVideoTransCoder *transcoder;

- (void)p_reportTranscodeFinish:(id)a0;
- (void)p_transcodeWithFileIDArray:(id)a0 message:(id)a1 content:(id)a2 conversation:(id)a3;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;

@end

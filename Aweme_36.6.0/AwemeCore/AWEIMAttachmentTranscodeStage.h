@class NSTimer, AWEIMVideoTransCoder;

@interface AWEIMAttachmentTranscodeStage : AWEIMStage

@property (retain, nonatomic) AWEIMVideoTransCoder *transcoder;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property BOOL isVENotTranscoding;

- (void)p_reportTranscodeFinish:(id)a0;
- (void)transcodeTimeout;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;
- (void)dealloc;

@end

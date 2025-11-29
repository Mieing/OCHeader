@class NSString;

@interface LivenessTC : NSObject <LivenessTCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVC:(id)a0;
- (int)setInitParams:(id)a0;
- (int)setParamsGeneral:(int)a0 value:(float)a1;
- (struct CGImage { } *)doFaceLive:(struct __CVBuffer { } *)a0 orient:(int)a1;
- (void)setMaskRadiusRatio:(float)a0 offsetToCenterRatio:(float)a1;
- (void)reStart:(int)a0;
- (void)trackCancel;
- (void)viewDismiss;
- (int)getAlgoErrorCode;
- (id)getLivenessErrorTitle:(int)a0;
- (id)getLivenessErrorMsg:(int)a0;
- (void)recordSrcVideo:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (struct CGImage { } *)doFaceLive:(struct __CVBuffer { } *)a0 depthPixelBuffer:(struct __CVBuffer { } *)a1 orient:(int)a2;
- (BOOL)passedWarmupStage;

@end

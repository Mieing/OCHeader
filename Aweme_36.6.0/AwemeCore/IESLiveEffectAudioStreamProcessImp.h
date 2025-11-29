@class NSString, LiveStreamCapture, IESLiveEffectWrapper;

@interface IESLiveEffectAudioStreamProcessImp : NSObject <IESLiveAudioEffectProcessing>

@property (retain, nonatomic) LiveStreamCapture *liveCapture;
@property (retain, nonatomic) IESLiveEffectWrapper *effectWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveCoreCapture:(id)a0;
- (void)createEffectSwitcherWithWrapper:(id)a0;
- (void)applyAudioEffect:(id)a0;
- (void)removeAudioEffect:(id)a0;
- (void)setEchoAudioEffectEnable:(BOOL)a0;
- (id)audioDrivePictureEffectPrepareHandlerWithParams:(struct IESAudioDrivePictureEffectParamsStruct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; double x7; double x8; })a0;
- (void)audioDrivePictureEffectUpdateParams:(struct IESAudioDrivePictureEffectParamsStruct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; double x7; double x8; })a0;
- (id)audioDrivePictureEffectDestroyHandler;
- (void).cxx_destruct;
- (void)cleanup;

@end

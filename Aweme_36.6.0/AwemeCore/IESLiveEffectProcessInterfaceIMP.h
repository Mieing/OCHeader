@class NSString;

@interface IESLiveEffectProcessInterfaceIMP : NSObject <IESLiveEffectProcessInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAudioDrivePictureEffect:(id)a0 params:(struct LSAudioDrivePictureEffectParamsStruct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; float x7; float x8; })a1;
- (void)refreshRenderFilterMemory:(void *)a0;
- (void)livecoreRefreshRenderFilterMemory:(id)a0;

@end

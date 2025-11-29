@class NSString;

@interface IESGCPCGAudioCaptureComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, XPlayAudioCaptureDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAudioCaptureState:(BOOL)a0;
- (void)didSetGameCPDIContext;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;

@end

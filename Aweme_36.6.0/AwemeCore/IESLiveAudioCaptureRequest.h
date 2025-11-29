@class IESLiveInteractAudioMonitorReason;

@interface IESLiveAudioCaptureRequest : IESLiveAVResourceRequest

@property (readonly, copy, nonatomic) IESLiveInteractAudioMonitorReason *reason;

- (void).cxx_destruct;

@end

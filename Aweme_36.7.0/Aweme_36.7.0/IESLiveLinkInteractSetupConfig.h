@class NSString, NSDictionary;

@interface IESLiveLinkInteractSetupConfig : NSObject

@property (nonatomic) BOOL rtcAudioCaptureDefaultStart;
@property (nonatomic) BOOL rtcVideoCaptureDefaultStart;
@property (nonatomic) BOOL defaultAudioScenarioIsMedia;
@property (nonatomic) BOOL enableExternVideo;
@property (nonatomic) BOOL enableExternAudio;
@property (nonatomic) BOOL useExternalAudioRender;
@property (nonatomic) unsigned long long externAudioSampleRate;
@property (nonatomic) unsigned long long externAudioChannelsPerFrame;
@property (copy, nonatomic) NSString *publishUrl;
@property (copy, nonatomic) NSString *customPublishUrl;
@property (nonatomic) BOOL enableSingleViewSR;
@property (nonatomic) BOOL disableReportPerfSample;
@property (copy, nonatomic) NSDictionary *engineParameters;
@property (nonatomic) long long pushStreamMode;

- (void).cxx_destruct;

@end

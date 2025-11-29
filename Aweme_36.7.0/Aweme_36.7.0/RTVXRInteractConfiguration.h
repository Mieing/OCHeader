@class NSString, NSData, NSDictionary;

@interface RTVXRInteractConfiguration : NSObject

@property (copy, nonatomic) NSString *appChannelType;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSData *appKey;
@property (copy, nonatomic) NSString *projectKey;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *channelKey;
@property (nonatomic) struct CGSize { double width; double height; } rtcResolution;
@property (copy, nonatomic) NSString *streamURL;
@property (copy, nonatomic) NSDictionary *rtcInfo;
@property (copy, nonatomic) NSDictionary *pipeline;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSDictionary *rtcExtInfo;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *voipSessionId;
@property (nonatomic) BOOL useRtcTestEnv;
@property (nonatomic) BOOL sendVideoFrameToGameEngine;
@property (nonatomic) BOOL sendAudioFrameToGameEngine;
@property (nonatomic) BOOL enableMixedLivePush;
@property (nonatomic) BOOL enableExternAudio;
@property BOOL retainLastVideoFrame;
@property (nonatomic) BOOL autoStopVideoCaptureSwitch;
@property (nonatomic) struct CGSize { double width; double height; } captureOutputSize;
@property (nonatomic) BOOL isPrepareCallingStage;
@property (nonatomic) BOOL isPreloadEngine;
@property (nonatomic) BOOL enableSpeakerAudioVolumeReport;
@property (nonatomic) BOOL preDisableLocalAudio;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *abTestConfig;
@property (nonatomic) BOOL enableCellularWhileWifiForAudio;

- (void).cxx_destruct;

@end

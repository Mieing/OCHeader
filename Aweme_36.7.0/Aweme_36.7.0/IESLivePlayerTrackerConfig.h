@class NSString, NSDictionary, IESLivePlayerBizStainedTrackInfo, NSNumber;

@interface IESLivePlayerTrackerConfig : NSObject <AWELiveStreamPlayerTrackerConfigProtocol>

@property (readonly, copy, nonatomic) NSString *bizDomain;
@property (readonly, copy, nonatomic) NSString *pageName;
@property (readonly, copy, nonatomic) NSString *blockName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLivePlayerBizStainedTrackInfo *stainedTrackInfo;
@property (retain, nonatomic) NSString *reportURL;
@property (retain, nonatomic) NSString *streamURL;
@property (retain, nonatomic) NSString *streamData;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSDictionary *optimizeInfo;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *connectMethodName;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *streamType;
@property (retain, nonatomic) NSNumber *sourceType;
@property (retain, nonatomic) NSString *anchorVersion;
@property (retain, nonatomic) NSString *longitude;
@property (retain, nonatomic) NSString *latitude;
@property (retain, nonatomic) NSNumber *anchorDevicePlatform;
@property (copy, nonatomic) NSString *anchorID;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *projectKey;
@property (retain, nonatomic) NSString *channel;
@property (nonatomic) BOOL shouldIgnoreAudioInterruption;
@property (nonatomic) BOOL isInLiveRoom;
@property (retain, nonatomic) NSString *triggerReason;
@property (copy, nonatomic) NSString *cameraID;
@property (nonatomic) BOOL isSubCamera;
@property (nonatomic) BOOL needsReportPreviewPullDuration;
@property (nonatomic) long long prepareIESEnable;
@property (nonatomic) long long prepareSDKEnable;

- (void).cxx_destruct;

@end

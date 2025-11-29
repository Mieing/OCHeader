@class NSString, IESLiveInteractAudioReportConfig, NSDictionary, NSNumber;
@protocol IESLiveRoomService;

@interface IESLiveInteractionGuestLinkerMediaConfig : NSObject <IESLiveLinkmicMediaServiceConfig>

@property (retain, nonatomic) IESLiveInteractAudioReportConfig *audioReportConfig;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) unsigned long long vendor;
@property (nonatomic) long long seiVersion;
@property (copy, nonatomic) NSString *linkmicID;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (nonatomic) BOOL isAutoMute;
@property (copy, nonatomic) NSString *linkerSessionId;
@property (retain, nonatomic) NSNumber *invisibleWhenJoinRTC;
@property (retain, nonatomic) NSNumber *autoSubscribeAudioWhenJoinRTC;
@property (retain, nonatomic) NSNumber *autoSubscribeVideoWhenJoinRTC;
@property (readonly, copy, nonatomic) NSDictionary *sdkParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

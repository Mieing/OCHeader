@class NSString, NSNumber;
@protocol IESLiveRoomService;

@interface IESLiveLinkmicLinkerConfig : NSObject <IESLiveLinkmicLinkerConfig>

@property (nonatomic) unsigned long long linkmicType;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long seiVersion;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) unsigned long long eventModel;
@property (copy, nonatomic) NSString *rtcExtraInfoString;
@property (nonatomic) BOOL enableAudioCaptureInBackground;
@property (nonatomic) BOOL updateLayoutOnlyWhenAudioStateChanges;
@property (nonatomic) BOOL pushSEIWhenSpeakStateChange;
@property (nonatomic) BOOL enableStopCaptureAudio;
@property (nonatomic) BOOL enableCheckLinkers;
@property (retain, nonatomic) NSNumber *customPlayMode;
@property (nonatomic) BOOL isStartInteractWithMute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

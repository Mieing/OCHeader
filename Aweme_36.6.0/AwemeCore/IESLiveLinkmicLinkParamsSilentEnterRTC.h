@class NSNumber, NSString;

@interface IESLiveLinkmicLinkParamsSilentEnterRTC : NSObject <IESLiveLinkmicLinkParamsSilentEnterRTC>

@property (retain, nonatomic) NSNumber *autoSubscribeAudioWhenJoinRTC;
@property (retain, nonatomic) NSNumber *autoSubscribeVideoWhenJoinRTC;
@property (retain, nonatomic) NSNumber *stopPlayerWhenJoinRTC;
@property (retain, nonatomic) NSNumber *muteLocalAudioWhenJoinRTC;
@property (nonatomic) BOOL isReplyLink;
@property (nonatomic) BOOL needCleanLinkerModel;
@property (nonatomic) BOOL needSwitchLinkedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

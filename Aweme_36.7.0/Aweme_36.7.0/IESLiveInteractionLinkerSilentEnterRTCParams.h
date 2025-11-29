@class NSNumber;

@interface IESLiveInteractionLinkerSilentEnterRTCParams : IESLiveInteractionLinkerParams

@property (retain, nonatomic) NSNumber *autoSubscribeAudioWhenJoinRTC;
@property (retain, nonatomic) NSNumber *autoSubscribeVideoWhenJoinRTC;
@property (retain, nonatomic) NSNumber *stopPlayerWhenJoinRTC;
@property (retain, nonatomic) NSNumber *muteLocalAudioWhenJoinRTC;
@property (nonatomic) BOOL isReplyLink;
@property (nonatomic) BOOL needCleanLinkerModel;
@property (nonatomic) BOOL needSwitchLinkedState;

- (void).cxx_destruct;

@end

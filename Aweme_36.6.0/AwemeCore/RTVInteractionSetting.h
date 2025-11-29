@class NSArray, NSNumber;

@interface RTVInteractionSetting : JSONModel

@property (copy, nonatomic) NSArray *feedAudioLowPushModels;
@property (retain, nonatomic) NSNumber *enable1v1AudioCallingFeed;
@property (retain, nonatomic) NSNumber *enable1v1CallingFeed;
@property (retain, nonatomic) NSNumber *defaultFeedVideoPlayVolume;
@property (retain, nonatomic) NSNumber *defaultVoipVoiceVolume;
@property (retain, nonatomic) NSNumber *defaultGameVolume;
@property (copy, nonatomic) NSArray *invitationRemindTimeInvervals;
@property (retain, nonatomic) NSNumber *invitationTipBubbleShowDuration;
@property (retain, nonatomic) NSNumber *enlargedPreviewShowBubbleDuration;
@property (retain, nonatomic) NSNumber *shouldShowEffectInteractiveEmoticon;
@property (retain, nonatomic) NSNumber *feedShareMessageListCountMaximum;
@property (retain, nonatomic) NSNumber *preloadPlayerEnable;
@property (copy, nonatomic) NSArray *interactiveEmoticonWhiteList;
@property (retain, nonatomic) NSNumber *enableInteractiveEmoticonWhiteList;
@property (retain, nonatomic) NSNumber *rtvRemoveFeedShareMsgSend;
@property (retain, nonatomic) NSNumber *rtvRemoveFeedShareMsgReceive;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

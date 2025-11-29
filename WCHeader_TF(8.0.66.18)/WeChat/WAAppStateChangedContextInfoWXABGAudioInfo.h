@interface WAAppStateChangedContextInfoWXABGAudioInfo : MMObject

@property (nonatomic) BOOL bgAudioMode;
@property (nonatomic) BOOL bgVoipMode;
@property (nonatomic) BOOL isVoipChatting;
@property (nonatomic) BOOL isVoipChattingInterupted;
@property (nonatomic) BOOL isWXVoipChatting;
@property (nonatomic) BOOL isWxaVoipWaiting;

- (id)description;

@end

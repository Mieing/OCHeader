@class MMListenMusicBaseRequest, MMListenBlueToothStatus, MMListenAudioBaseRequest;

@interface MMListenNewSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;
@property (retain, nonatomic) MMListenBlueToothStatus *blueToothStatus;

+ (void)initialize;

@end

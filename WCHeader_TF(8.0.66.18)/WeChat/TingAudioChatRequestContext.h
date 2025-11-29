@class MMListenRecommendInfo;

@interface TingAudioChatRequestContext : WXPBGeneratedMessage

@property (nonatomic) BOOL ignorePlayTaskPlayingItem;
@property (nonatomic) BOOL enableLocalVad;
@property (nonatomic) BOOL enableRemoveVad;
@property (nonatomic) int chatplayMusicChatScene;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) int playTtsType;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;

+ (void)initialize;

@end

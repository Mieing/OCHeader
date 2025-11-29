@class NSString;

@interface TingMusicChatRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *asrListenId;
@property (nonatomic) int chatType;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) int playTtsType;

+ (void)initialize;

@end

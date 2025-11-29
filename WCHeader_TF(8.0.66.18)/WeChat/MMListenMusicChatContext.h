@class NSString, NSData;

@interface MMListenMusicChatContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ttsBizId;
@property (retain, nonatomic) NSString *recommendPayload;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSData *clientBypassInfoBytes;

+ (void)initialize;

@end

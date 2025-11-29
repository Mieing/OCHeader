@class NSString, NSData;

@interface RecommendPanelEmojiRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *chatId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSData *ctx;
@property (retain, nonatomic) NSData *pageBuff;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *localEmoji;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end

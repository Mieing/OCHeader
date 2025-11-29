@class NSString, NSMutableArray;

@interface RecommendPanelEmojiChatHistory : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *msgContent;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL isSelf;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) unsigned int fromUin;
@property (retain, nonatomic) NSMutableArray *keyWordList;

+ (void)initialize;

@end

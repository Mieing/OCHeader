@class NSString, CreateAIWeAppCard, CreateAIRemind;

@interface AIMessageWrapInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *xml;
@property (retain, nonatomic) CreateAIRemind *createAiRemind;
@property (retain, nonatomic) CreateAIWeAppCard *createAiWeappCard;
@property (nonatomic) BOOL isClientMsg;
@property (retain, nonatomic) NSString *senderNickname;

+ (void)initialize;

@end

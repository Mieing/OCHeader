@class NSString;

@interface ChatBotPrologueMsg : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (nonatomic) unsigned long long msgId;
@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned long long updateTime;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *xml;
@property (retain, nonatomic) NSString *timeString;
@property (nonatomic) BOOL isExposed;
@property (nonatomic) unsigned int showType;

+ (void)initialize;

@end

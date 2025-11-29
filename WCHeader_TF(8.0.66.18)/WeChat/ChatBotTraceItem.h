@class NSString, NSMutableArray, ChatBotSourceInfo;

@interface ChatBotTraceItem : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (nonatomic) unsigned int traceId;
@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned long long updateTime;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (retain, nonatomic) ChatBotSourceInfo *srcInfo;
@property (retain, nonatomic) NSString *groupId;

+ (void)initialize;

@end

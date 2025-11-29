@class BizTopicList, BizMessageList;

@interface BizProfileV2Resp_Tab : WXPBGeneratedMessage

@property (nonatomic) BOOL show;
@property (retain, nonatomic) BizMessageList *msgList;
@property (retain, nonatomic) BizTopicList *topicList;

+ (void)initialize;

@end

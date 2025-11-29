@class BizTopicList, BizMessageList;

@interface BizProfileV2Resp_Tab : WXPBGeneratedMessage

@property (nonatomic) BOOL show;
@property (retain, nonatomic) BizMessageList *msgList;
@property (retain, nonatomic) BizTopicList *topicList;

+ (void)initialize;

- (void)setTopicList:(id)a0;
- (id)topicList;
- (void)setMsgList:(id)a0;
- (id)msgList;
- (void)setShow:(BOOL)a0;
- (BOOL)show;

@end

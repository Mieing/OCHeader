@class NSCache;

@interface IESIMMessageCache : NSObject

@property (retain, nonatomic) NSCache *messageCache;

+ (id)__getKeyWithMessageId:(id)a0 inConversation:(id)a1;
+ (id)getMessageWithMessageId:(id)a0 inConversation:(id)a1;
+ (void)setMessageWithMessageId:(id)a0 inConversation:(id)a1 message:(id)a2;
+ (void)removeMessageWithMessageId:(id)a0 inConversation:(id)a1;
+ (void)removeAllMessages;
+ (id)shareInstance;

- (void).cxx_destruct;

@end

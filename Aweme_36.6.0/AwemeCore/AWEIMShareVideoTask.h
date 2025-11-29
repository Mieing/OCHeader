@class NSString;

@interface AWEIMShareVideoTask : AWEIMUGTaskModel

@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSString *convId;
@property (copy, nonatomic) NSString *msgId;
@property (nonatomic) long long sendOrderIndex;
@property (nonatomic) long long convType;
@property (copy, nonatomic) NSString *sendGroupID;
@property (copy, nonatomic) NSString *noticeMessageID;
@property (copy, nonatomic) NSString *noticeTip;

+ (id)p_keyWithLocalNoticeCache;
+ (void)p_deleteLocalNoticeWithConvId:(id)a0 msgId:(id)a1 needUpdateCache:(BOOL)a2;
+ (void)deleteAllNotice;

- (id)initWithContentDict:(id)a0;
- (void)finishTask:(id /* block */)a0;
- (void)p_deletePreviousNoticeIfNeed;
- (void)p_saveNoticeToLocal;
- (BOOL)tokenValid;
- (void)addNotice;
- (void)openChatPage;
- (void)deleteNotice;
- (void).cxx_destruct;

@end

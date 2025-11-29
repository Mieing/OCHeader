@class NSString, NSMutableDictionary;

@interface AWEIMUnreadShareFeedManager : NSObject <IESIMChatDataManagerDelegate> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSMutableDictionary *recallInfoDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)iesim_onConversationDataSourceMessagesUpdated:(id)a0 belongingConversationMap:(id)a1;
- (BOOL)didMessageRecalledWithMessageId:(id)a0;
- (void)markRecalledMessage:(id)a0;
- (void)markInsertUnreadShareMessageWithMessageId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

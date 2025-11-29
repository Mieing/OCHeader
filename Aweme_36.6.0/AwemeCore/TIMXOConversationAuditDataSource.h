@class NSString, NSMutableDictionary, TIMXSDKInstance, TIMXOEnterConversationNotifyHandler;
@protocol TIMXOConversationAuditDataSourceDelegate, TIMXConversationApplyProtocol;

@interface TIMXOConversationAuditDataSource : NSObject <TIMXOEnterConversationObserverDelegate> {
    TIMXSDKInstance *_r;
}

@property (weak, nonatomic) id<TIMXOConversationAuditDataSourceDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *conversationCursorDic;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL shouldClearUnread;
@property (retain, nonatomic) id<TIMXConversationApplyProtocol> applier;
@property (copy, nonatomic) NSString *handlerId;
@property (retain, nonatomic) TIMXOEnterConversationNotifyHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchNewestAuditListWithLimit:(int)a0 completion:(id /* block */)a1;
- (void)fetchNewestAuditListWithConShortId:(long long)a0 limit:(int)a1 completion:(id /* block */)a2;
- (void)loadMoreAuditListWithLimit:(int)a0 completion:(id /* block */)a1;
- (void)loadMoreAuditListWithConShortId:(long long)a0 limit:(int)a1 completion:(id /* block */)a2;
- (id)initWithRootObject:(id)a0 shouldClearUnread:(BOOL)a1 delegate:(id)a2;
- (void)onPushedNewApply:(id)a0 type:(int)a1;
- (void)fetchNewestAuditListWithShortID:(long long)a0 limit:(int)a1 completion:(id /* block */)a2;
- (void)_updateStatus:(BOOL)a0 conShortId:(long long)a1 nextCursor:(long long)a2;
- (void)loadMoreAuditListWithLimit:(int)a0 shortID:(long long)a1 completion:(id /* block */)a2;
- (long long)_getCursorWithConShortId:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end

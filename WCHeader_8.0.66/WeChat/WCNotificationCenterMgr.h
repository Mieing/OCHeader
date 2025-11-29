@class WCDataItem, MyWCDB;
@protocol WCNotificationCenterMgrDelegate;

@interface WCNotificationCenterMgr : MMObject <INewSyncPluginExt> {
    WCDataItem *m_lastDataItem;
    int m_unReadCount;
}

@property (weak, nonatomic) id<WCNotificationCenterMgrDelegate> m_delegate;
@property (retain, nonatomic) MyWCDB *m_database;
@property (retain, nonatomic) WCDataItem *redDotDataItem;
@property (nonatomic) long long curRedDotPriorityComparisons;

- (id)init;
- (void)dealloc;
- (void)saveSetting;
- (void)NotifyCheckSelector;
- (BOOL)compareRedDotPriority:(id)a0 withOldItem:(id)a1;
- (BOOL)shouldUpdateLastDataItemWithNewDataItem:(id)a0;
- (void)NotifyCmd:(id)a0;
- (id)getLastWCObject;
- (unsigned int)getUnReadMessageCount;
- (unsigned int)getUnReadMessageCountReleatedToMe;
- (unsigned int)getUnReadMessageCountForMutualFriends;
- (BOOL)isMentionedMySelf:(id)a0;
- (BOOL)isRefSelfCommentWithMsg:(id)a0;
- (BOOL)isMessageRelatedToMe:(id)a0;
- (id)getLastUnReadMessage;
- (id)getLatestReadMessage;
- (id)getUnReadMessages;
- (id)getUnReadMessagesLimit:(int)a0;
- (id)getAllMessages;
- (id)getMessageFrom:(id)a0 maxCount:(unsigned int)a1;
- (BOOL)addNewRawMessage:(id)a0 hasRead:(BOOL)a1;
- (void)markMessageRead:(id)a0;
- (void)markMessageListRead:(id)a0;
- (void)markMessageAllReadBeginWithMessage:(id)a0;
- (void)deleteAllMessages;
- (void)deleteMessage:(id)a0;
- (void)deleteMessageByFeedId:(id)a0;
- (void)markMessageSpringWished:(id)a0 springWishFlag:(long long)a1;
- (void)rptReceSnsRedDot:(id)a0;
- (void).cxx_destruct;

@end

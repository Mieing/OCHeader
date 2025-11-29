@class TIMXSDKInstance, TIMXOConversationApplyModel, NSDictionary, NSString, TIMXOEnterConversationNotifyHandler, YYCache, NSObject;
@protocol OS_dispatch_queue, TIMXOConversationAuditDataSourceBriefDelegate, TIMXConversationApplyProtocol;

@interface TIMXOConversationAuditBriefDataSource : NSObject <TIMXOEnterConversationObserverDelegate> {
    long long p_cacheBuildToken;
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long unreadCount;
@property (retain, nonatomic) TIMXOConversationApplyModel *newestApply;
@property (retain, nonatomic) NSDictionary *bizExtraInfo;
@property (weak, nonatomic) id<TIMXOConversationAuditDataSourceBriefDelegate> delegate;
@property (copy, nonatomic) NSString *handlerId;
@property (retain, nonatomic) TIMXOEnterConversationNotifyHandler *handler;
@property (retain, nonatomic) id<TIMXConversationApplyProtocol> applier;
@property (readonly, nonatomic) YYCache *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchUnreadAuditWithBizExt:(id)a0 statusCheckblock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchBatchApplyUnreadCountWith:(id)a0 bizExt:(id)a1 completion:(id /* block */)a2;
- (void)fetchUnreadAuditWithCompletion:(id /* block */)a0;
- (void)markReadAllAuditWithCompletion:(id /* block */)a0;
- (void)markReadAuditWithConShortId:(long long)a0 completion:(id /* block */)a1;
- (void)disappearAuditUnreadCount;
- (id)initWithRootObject:(id)a0 delegate:(id)a1;
- (void)userDidLogout:(id)a0;
- (void)onPushedNewApply:(id)a0 type:(int)a1;
- (id)_readDeleteMarkFromDisk;
- (id)_readNewestApplyFromDisk;
- (id)p_readBizExtraInfoFromDisk;
- (void)_writeNewestApplyToDisk:(id)a0;
- (void)p_writeBizExtraInfoToDisk:(id)a0;
- (void)_writeDeleteMarkFromDisk:(id)a0;
- (long long)p_currentUid;
- (void).cxx_destruct;
- (void)dealloc;

@end

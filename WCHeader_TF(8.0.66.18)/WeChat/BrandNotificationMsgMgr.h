@class MemoryMappedKV, BrandNotificationPriorityItem, NSString;

@interface BrandNotificationMsgMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *notificationDigestMMKV;
@property (retain, nonatomic) BrandNotificationPriorityItem *priorityItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBrandAttributedNotifyMsgOpen;
+ (BOOL)canHandleBrandAttributedNotifyMsg:(id)a0;
+ (BOOL)canHandleBrandFusionSummary:(id)a0;
+ (BOOL)canGetNotifyMsgNodeFromMsgSource:(id)a0;
+ (BOOL)canNotAddDB:(id)a0;
+ (BOOL)isBrandNotificationIsFromBrandTemplateMsgHolder:(id)a0;
+ (id)genAttributedContentWithReaderWrapNotifyMsgDigestItem:(id)a0;
+ (id)genAttributedContentWithReaderWrapNotifyMsgDigestItem:(id)a0 isMerge:(BOOL)a1 mergeCount:(long long)a2;
+ (id)genAttributedContentWithReaderWrapNotifyMsg:(id)a0;
+ (long long)mergeCountForMsg:(id)a0;
+ (long long)genMergeCountWithReaderWrapNotifyMsg:(id)a0;
+ (long long)genMergeCountWithReaderWrapNotifyMsgMergeItem:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearAllData;
- (id)genBrandAttributedNotifyMsgBoxDigest:(id)a0;
- (void)setLatestNotificationBoxDigestBold:(BOOL)a0;
- (BOOL)isLatestNotificationBoxDigestBold;
- (BOOL)shouldShowPriorityNotificationMsgSwitch;
- (BOOL)updateNotificationMsgWrapExposeTime:(id)a0 withStartTime:(unsigned long long)a1 withDB:(id)a2;
- (BOOL)checkIfNeedUpdateNotificationWithCurMainSessionMessageWrap:(id)a0 withLatestMsgWrap:(id)a1 shouldShowPriorityNotificationWithDB:(id)a2;
- (id)getPriorityNotificationMsgWithCurMainSessionMessageWrap:(id)a0 withLatestMsgWrap:(id)a1 withUnreadCount:(unsigned int)a2 withDB:(id)a3 shouldUpdateShouldShowPriorityNotificationFlag:(BOOL *)a4;
- (BOOL)updateNotificationMsgWrap:(id)a0 isClickPriorityNotificationInTL:(BOOL)a1 withDB:(id)a2;
- (unsigned int)getClicfgValue:(id)a0 withDef:(unsigned int)a1;
- (BOOL)internalUpdateNotificationMsgWrap:(id)a0 shouldShowPriorityNotification:(BOOL)a1 withDB:(id)a2;
- (void).cxx_destruct;

@end

@class WCClearScheduleCgi, NSString, WCTDatabase, WCGetScheduleCgi, WCTTable;

@interface WCScheduleMgr : MMUserService <MessagePageSheetAdapterDelegate, WCSetScheduleCgiDelegate, WCGetScheduleCgiDelegate, WCClearScheduleCgiDelegate, MMKernelExt, IMsgExt, MMServiceProtocol>

@property (nonatomic) BOOL isXlabEnable;
@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *scheduleTable;
@property (retain, nonatomic) WCGetScheduleCgi *scheduleGetCgi;
@property (retain, nonatomic) WCClearScheduleCgi *deleteAllCgi;
@property (nonatomic) BOOL canShowMainFrameEducation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isScheduleEnable;
- (void)handleSyncAction:(long long)a0 remindId:(id)a1;
- (void)addScheduleItem:(id)a0;
- (BOOL)removeItemWithMessage:(id)a0;
- (BOOL)removeItem:(id)a0;
- (BOOL)removeAllSchedules;
- (BOOL)hasSchedule:(id)a0;
- (id)getScheduleItemFrom:(id)a0;
- (id)getScheduleItemWithRemindId:(id)a0;
- (long long)scheduleItemCount;
- (id)scheduleItems;
- (id)scheduleItemsWithLimit:(long long)a0;
- (void)modifyItem:(id)a0 remindDate:(id)a1;
- (void)removeRemindForItem:(id)a0;
- (void)addOnceRemindItem:(id)a0 remindDate:(id)a1;
- (void)modifyOnceRemindItem:(id)a0 remindDate:(id)a1;
- (void)updateAllSchedules;
- (void)showScheduleSession:(id)a0 from:(id)a1 complete:(id /* block */)a2;
- (void)showScheduleSessionWithContact:(id)a0 message:(id)a1 from:(id)a2;
- (void)showScheduleSessionWithContact:(id)a0 message:(id)a1 from:(id)a2 complete:(id /* block */)a3;
- (void)initDB;
- (void)onCgiAddSchedule:(id)a0 success:(BOOL)a1 errTips:(id)a2;
- (void)onCgiModSchedule:(id)a0 success:(BOOL)a1 errTips:(id)a2;
- (void)onCgiDeleteSchedule:(id)a0 success:(BOOL)a1 errTips:(id)a2;
- (void)onCgiAddOnceRemind:(id)a0 success:(BOOL)a1 errTips:(id)a2;
- (void)onGetScheduleCgi:(id)a0 updateFirstPageItems:(id)a1;
- (void)onGetScheduleCgi:(id)a0 updateAllItems:(id)a1;
- (void)onGetScheduleCgiFail:(id)a0 errMsg:(id)a1;
- (void)onCgiClearAllSuccess:(BOOL)a0 errTips:(id)a1;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (BOOL)shouldShowMiniTaskSwipeEducation;
- (void)doShowMiniTaskSwipeEducation;
- (void).cxx_destruct;

@end

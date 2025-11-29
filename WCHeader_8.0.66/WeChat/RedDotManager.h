@interface RedDotManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)currentCtrlInfoAtPath:(id)a0;
- (id)currentCtrlInfoIgnoreAtPath:(id)a0 ignoreNMFrequency:(BOOL)a1;
- (void)addNewRedDotCtrlInfo:(id)a0;
- (id)addNewRedDotCtrlInfoWithResult:(BOOL)a0 ctrlInfo:(id)a1;
- (BOOL)syncCtrlInfo:(id)a0;
- (BOOL)disposeRedDotAtPath:(id)a0 subReasonType:(int)a1;
- (void)disposeRedDotByTipsUuid:(id)a0 subReasonType:(int)a1;
- (BOOL)disposeRedDotIgnoreClearTypeAtPath:(id)a0;
- (id)disposeGroupTipsWithGroupId:(id)a0;
- (id)getAllRedDotCtrlInfoAtPath:(id)a0;
- (id)getAllRedDotCtrlInfoAtType:(int)a0;
- (id)getAllRedDotCtrlInfo;
- (id)getAllCurRedDotCtrlInfo;
- (void)resetAllRedDotData;
- (id)ctrlInfoWithType:(int)a0;
- (id)ctrlInfoWithTipsUuid:(id)a0;
- (int)showInfoTypeAtPath:(id)a0;
- (id)currentShowInfoAtPath:(id)a0;
- (int)ctrlInfoTypeAtPath:(id)a0;
- (BOOL)disposeRedDotByUuidOnly:(id)a0;
- (BOOL)clearAllRedDotInfo;
- (BOOL)dropTable:(BOOL)a0 dropWxTable:(BOOL)a1;
- (void)redDotInfoInvalidCheck;
- (BOOL)shouldShowRedDotAtPath:(id)a0;
- (void)clearSameTypeCtrlInfoType:(int)a0;
- (id)clearCtrlInfoWithCondition:(id)a0 notify:(BOOL)a1;
- (void)revokeRedDotByViewAction:(int)a0 commentScene:(int)a1;
- (void)clearSameRevokeIdCtrlInfo:(id)a0;
- (void)saveRedDotInfoToLocal;
- (void)clearRedDotMockInfo;
- (id)clearRedDotByPathAndUuid:(id)a0 tipsUuid:(id)a1 notifyUI:(BOOL)a2;
- (id)clearShowInfoByPathAndUuid:(id)a0 tipsUuid:(id)a1 notifyUI:(BOOL)a2 uniqueId:(id)a3 force:(BOOL)a4;
- (BOOL)revokeRedDotPathInfo:(id)a0 isOnlyWhiteList:(BOOL)a1 whiteListTips:(id)a2;
- (id)revokeRedDotPathInfoWithResult:(id)a0 isOnlyWhiteList:(BOOL)a1 whiteListTips:(id)a2;
- (id)getRedDotCtrlInfoListWithRevokeId:(id)a0;
- (void)loadRedDotInfoFromDB:(id)a0;
- (id)loadRedDotInfoFromDBWithResult:(BOOL)a0 finderUsername:(id)a1;
- (BOOL)updateOrInsertWXRedDotInfo:(id)a0;
- (BOOL)updateOrInsertWXRedDotInfoList:(id)a0;
- (BOOL)updateOrInsertFinderRedDotInfo:(id)a0 ctrlInfo:(id)a1;
- (BOOL)updateOrInsertFinderRedDotInfoList:(id)a0 ctrlInfoVector:(id)a1;
- (id)redDotDataByUsername:(id)a0;
- (BOOL)addSubAccountFinderRedDot:(id)a0;
- (void)disposeSubAccountFinderUsername:(id)a0 reddotPath:(id)a1;
- (id)getCtrlInfoByFinderUsernameType:(id)a0 type:(int)a1;
- (id)getCtrlInfoByFinderUsernamePath:(id)a0 reddotPath:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

@class WCContactCacheOptimizeInfo, NSRecursiveLock, WCContactCacheSliceRecordInfo, NSMutableDictionary;

@interface CContactCacheOptimizeMgr : MMObject <MMKernelExt> {
    WCContactCacheSliceRecordInfo *m_contactCacheSliceRecordInfo;
    WCContactCacheOptimizeInfo *m_contactCacheOptimizeInfo;
    NSRecursiveLock *m_lock;
    BOOL m_isContactCacheOptimizeSwitch;
    NSMutableDictionary *m_dicStateMachine;
    unsigned int m_isContactCacheOptimizeMinMemCount;
    NSRecursiveLock *m_recordUseLock;
}

- (id)init;
- (void)initData;
- (void)dealloc;
- (void)registerMethod;
- (BOOL)isOpenContactCacheOptimize;
- (id)getContactCacheOptimizeBestLoadArrUserName;
- (void)recordUseContactUserName:(id)a0;
- (void)asyncRecordUseContactUserName:(id)a0;
- (void)recordContactCacheOptimizeStrategy;
- (void)syncFTSContactDataProviderInit;
- (void)doRecordContactCacheOptimizeStrategy;
- (void)doSaveSliceRecordInfoDataToDB;
- (void)clearBestLoadArrUserName;
- (id)genContactCacheOptimizeFeatureWithUserName:(id)a0 operateTime:(unsigned int)a1;
- (id)genContactCacheAccessUserFeatureRecrodWithUserName:(id)a0 operateTime:(unsigned int)a1 cacheOptimizeFeature:(id)a2;
- (unsigned int)parseCondValueWithStrategyFeature:(id)a0 condtion:(unsigned long long)a1;
- (id)coverSearchGroupFeatureToStrategyFeature:(id)a0;
- (id)getBestCacheOptimizeStrategyFeature:(double)a0;
- (id)accordGroupUserNameListWithBestCacheOptimizeStrategyFeature:(id)a0 operateTime:(unsigned int)a1 listScale:(id *)a2;
- (BOOL)isCheckContactCacheOptimizeFeatureIsMatchBestCacheOptimizeStrategyFeature:(id)a0 bestCacheOptimizeStrategyFeature:(id)a1;
- (void)removeOverdueRecordEveryDay:(unsigned int)a0;
- (BOOL)checkEnoughRecordCacheOptimizeInfoWithCurrentTimeDayZero:(unsigned int)a0;
- (unsigned int)getMaxDayInterval;
- (unsigned int)getMinRecordDayInterval;
- (unsigned int)getAllChatRoomStrangerCountSwitch;
- (void)calculateAllChatRoomStrangerCountEveryDay;
- (void)calculateFirstRecordCacheOptimizeInfoEveryDay;
- (id)getContactCacheOptimizeInfo;
- (id)p_getContactCacheOptimizeDirPath;
- (id)p_getContactCacheOptimizeSliceRecordInfoDataPathWithDateStr:(id)a0;
- (void)p_loadContactCacheOptimizeSliceRecordInfoInternal;
- (void)p_saveContactCacheOptimizeSliceRecordInfoToDataFileInternal;
- (id)p_getContactCacheOptimizeInfoPath;
- (void)p_loadContactCacheOptimizeInfoInternal;
- (void)p_saveContactCacheOptimizeInfoToDataFileInternal;
- (id)p_getRemoveOverdueEveryDayId;
- (id)p_getCalculateAllChatRoomStrangerCountEveryDayId;
- (id)p_getFirstRecordCacheOptimizeInfoEveryDayId;
- (void)p_reportIDKeyChatRoomListScale;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate:(id)a0;
- (void)onKickQuit;
- (void)onPreQuit;
- (void)onManulLogOut;
- (void).cxx_destruct;

@end

@class MemoryMappedKV, NSMutableArray, NSDate;
@protocol MMHeavyUserDataSourceDelegate;

@interface MMHeavyUserDataSource : NSObject {
    MemoryMappedKV *m_memoryMappedKV;
    unsigned long long m_heavyUserType;
    unsigned long long m_heavyUserPoint;
    unsigned long long m_contactCount;
    unsigned long long m_sessionCount;
    unsigned long long m_wechatSize;
    unsigned long long m_yesterdayDumpCount;
    double m_finderAEC;
    NSMutableArray *m_effectiveWatchLiveDays;
    unsigned long long m_todayWatchLiveTotalTime;
    NSDate *m_liveLastDate;
}

@property (weak, nonatomic) id<MMHeavyUserDataSourceDelegate> delegate;

- (id)init;
- (void)loadData;
- (id)currentUserMemmoryMappedKey;
- (id)get14606KVString;
- (BOOL)isFirstScanThisWeek;
- (void)saveTodayHasScanned;
- (BOOL)isFirstReportHeavyUserTypeToday;
- (void)updateNextReportTimestamp;
- (void)updateHeavyUserType:(unsigned long long)a0;
- (void)saveLastReportHeavyUserType:(unsigned long long)a0;
- (unsigned long long)getLastReportHeavyUserType;
- (unsigned long long)getHeavyUserType;
- (BOOL)isFirstReportHeavyUserPointToday;
- (void)saveLastReportHeavyUserPointTime;
- (unsigned long long)getHeavyUserPoint;
- (void)updateHeavyUserPoint:(unsigned long long)a0;
- (void)beginStackReport;
- (void)finishStackReport;
- (BOOL)checkIfNeedRetryStackReport;
- (unsigned long long)getContactCount;
- (void)updateContactCount:(unsigned long long)a0;
- (unsigned long long)getSessionCount;
- (void)updateSessionCount:(unsigned long long)a0;
- (unsigned long long)getWeChatSize;
- (void)updateWeChatSize:(unsigned long long)a0;
- (unsigned long long)getDumpCount;
- (unsigned long long)p_getYesterDayDumpCount;
- (void)addDumpCount;
- (double)getFinderAEC;
- (void)updateFinderAEC:(double)a0;
- (void)updateLiveTime:(unsigned long long)a0;
- (void)updateEffectiveWatchLiveDaysArray;
- (double)getLiveWatchRate;
- (void)clearAll;
- (void).cxx_destruct;

@end

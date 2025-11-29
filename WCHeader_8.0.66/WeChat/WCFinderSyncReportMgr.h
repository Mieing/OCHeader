@class NSString, EntranceExposeContent_ExposeRecord;

@interface WCFinderSyncReportMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) EntranceExposeContent_ExposeRecord *momentsRecord;
@property (nonatomic) unsigned int lastEnterMomentsTs;
@property (retain, nonatomic) EntranceExposeContent_ExposeRecord *finderRecord;
@property (nonatomic) unsigned int lastEnterFinderTs;
@property (retain, nonatomic) EntranceExposeContent_ExposeRecord *liveRecord;
@property (nonatomic) unsigned int lastEnterLiveTs;
@property (nonatomic) unsigned int lastEnterFinderEntryTs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)genExposeRecord;
- (void)updateSyncRecord:(unsigned long long)a0 scene:(unsigned long long)a1;
- (void)cleanData;
- (void)updateEntranceTime:(unsigned long long)a0 isEnter:(BOOL)a1;
- (unsigned int)lastEnterEntranceTime:(unsigned long long)a0;
- (id)currentEntranceRecord:(unsigned long long)a0;
- (long long)getStayFinderTimelineInterval;
- (void).cxx_destruct;

@end

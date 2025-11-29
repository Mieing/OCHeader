@class NSString, NSMutableDictionary;

@interface WABackgroundFetchMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *dicPrefechDataMemoryStore;
@property (retain, nonatomic) NSMutableDictionary *dicPeriodDataMemoryStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)fetchPeriodData;
- (void)periodFetchData:(id)a0;
- (BOOL)asyncPreFetchDataIfNeed:(id)a0 RelativeURL:(id)a1 EnterScene:(unsigned int)a2 withLocation:(BOOL)a3 reportItem:(id)a4;
- (BOOL)sendPreFetchCgiWithContact:(id)a0 relativeURL:(id)a1 enterScene:(unsigned int)a2 latitude:(double)a3 longitude:(double)a4 reportItem:(id)a5;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1 reportItem:(id)a2;
- (void)handlePreFetchResponse:(id)a0 Request:(id)a1;
- (void)handlePeriodFetchResponse:(id)a0;
- (void)tryDeleteUnstarData;
- (void)tryDeleteExpiredData;
- (id)getPreFetchData:(id)a0;
- (id)getPeriodFetchData:(id)a0;
- (void)cleanPreFetchDataCache:(id)a0;
- (void)cleanPeriodFetchDataCache:(id)a0;
- (void).cxx_destruct;

@end

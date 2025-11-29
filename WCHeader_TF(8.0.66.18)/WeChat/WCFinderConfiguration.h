@class NSMutableDictionary;

@interface WCFinderConfiguration : NSObject

@property (retain, nonatomic) NSMutableDictionary *liveDict;
@property (retain, nonatomic) NSMutableDictionary *liveNoticeDict;
@property (retain, nonatomic) NSMutableDictionary *adContactDict;
@property (retain, nonatomic) NSMutableDictionary *nearbyLivePrefetchDict;
@property (retain, nonatomic) NSMutableDictionary *liveTabPrefetchTimeDict;
@property (retain, nonatomic) NSMutableDictionary *liveShareStatusRefreshIntevalDict;
@property (retain, nonatomic) NSMutableDictionary *liveAutoPlayControlFlagDict;
@property (nonatomic) unsigned long long liveNoticeStateRefreshInterval;
@property (nonatomic) unsigned long long adContactRefreshInterval;
@property (nonatomic) long long nearbyLivePrefetchInterval;
@property (nonatomic) long long liveTabPrefetchInterval;

- (id)init;
- (BOOL)shouldUseLocalLiveStatusWithLiveId:(id)a0;
- (unsigned long long)getLiveStatusFromLocalWithLiveId:(id)a0;
- (BOOL)shouldUseLocalLiveNoticeReserveStateWithNoticeId:(id)a0;
- (unsigned long long)getLiveNoticeReserveStateFromLocalWithNoticeId:(id)a0;
- (void)updateLiveNoticeInfo:(id)a0;
- (BOOL)shouldUseLocalAdContactWithUsername:(id)a0;
- (id)getAdContactFromLocalWithUsername:(id)a0;
- (void)updateAdContact:(id)a0;
- (void)refreshNearbyLivePrefetchTimestampWithPullType:(unsigned long long)a0;
- (BOOL)canNearbyLivePrefetchWithPullType:(unsigned long long)a0;
- (void)refreshLiveTabPrefetchTimestampWithTabId:(unsigned long long)a0;
- (BOOL)canLiveTabPrefetch;
- (BOOL)canLiveTabPrefetchWithTabId:(unsigned long long)a0;
- (void)resetLivePrefetchTime;
- (BOOL)updateLiveShareStatusRefreshInteval:(id)a0 refreshInteval:(double)a1;
- (double)currentLiveShareStatusRefreshInteval:(id)a0;
- (void)resetLiveShareStatusRefreshIntevalDict;
- (BOOL)updateLiveAutoPlayControlFlag:(id)a0 controlFlag:(unsigned int)a1;
- (unsigned int)currentLiveAutoPlayControlFlag:(id)a0;
- (void)resetLiveAutoPlayControlFlagDict;
- (id)liveShareSupportJumpFlagKey:(id)a0;
- (void)updateLiveShareSupportJumpFlag:(id)a0 controlFlag:(BOOL)a1;
- (BOOL)currentLiveShareSupportJumpFlag:(id)a0;
- (id)liveShareSupportSquareJumpPrefetchKey:(id)a0 scene:(unsigned int)a1 isControlFlag:(BOOL)a2;
- (void)updateLiveShareSupportSquareJumpPrefetchInfo:(id)a0 scene:(unsigned int)a1 controlFlag:(BOOL)a2 jumpNavliveBuffer:(id)a3;
- (BOOL)currentLiveShareSupportSquareJumpPrefetchFlag:(id)a0 scene:(unsigned int)a1;
- (id)currentLiveShareSupportSquareJumpPrefetchData:(id)a0 scene:(unsigned int)a1;
- (void).cxx_destruct;

@end

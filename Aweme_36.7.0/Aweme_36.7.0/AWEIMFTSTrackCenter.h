@class NSMutableDictionary, NSTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMFTSTrackCenter : NSObject <AWEIMFTSTrackProtocol>

@property (retain, nonatomic) NSTimer *trackSearchStartTimer;
@property (retain, nonatomic) NSMutableDictionary *searchDataDict;
@property (retain, nonatomic) NSMutableDictionary *coldStartSyncDataDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackQueue;
@property (nonatomic) double setupStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableTimerOpt;
- (void)cancelSearchWithId:(id)a0;
- (void)ftsSearchEndWithId:(id)a0 count:(long long)a1 monitorArray:(id)a2;
- (void)startSyncWithId:(id)a0 type:(long long)a1 count:(long long)a2;
- (void)syncEndWithId:(id)a0;
- (id)initWithTrackSearchStartInterval:(double)a0;
- (void)setupStart;
- (void)trackHasSyncAllMultipleMessages:(BOOL)a0 withSearchId:(id)a1;
- (void)startSearchWithId:(id)a0 types:(id)a1 limit:(long long)a2 conversationID:(id)a3 keyword:(id)a4;
- (void)setupEnd;
- (void)addTrackSearchStartTimerWithInterval:(double)a0;
- (void)invalidateTrackSearchStartTimer;
- (void)resumeTrackSearchTimerIfNeeded;
- (void)pauseTrackSearchTimerIfNeeded;
- (void)trackSearchStartData;
- (void)syncEndWithId:(id)a0 startTimeInterval:(double)a1 type:(long long)a2 count:(long long)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end

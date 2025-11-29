@class MMLiveTaskId, NSMutableDictionary;

@interface LivePAGStatistics : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableDictionary *executeRecordDict;
@property (retain, nonatomic) NSMutableDictionary *averFrameTimeRecordDict;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultDatas;
- (void)onLivePAGExecute:(long long)a0;
- (void)onLivePAG:(long long)a0 averFrameTimeStat:(double)a1;
- (void)onExitLive;
- (void)recordLivePAGExecute:(long long)a0;
- (void)recordLivePAG:(long long)a0 averFrameTime:(double)a1;
- (int)getLivePAGExecuteCnt:(id)a0;
- (double)getLivePAGAverFrameTime:(long long)a0;
- (double)getLivePAGAverFrameTimeMax:(long long)a0;
- (id)getLibPAGBusinessList;
- (id)getRfxPAGBusinessList;
- (void).cxx_destruct;

@end

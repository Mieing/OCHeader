@class NSDictionary, NSMutableArray;

@interface IESLivePlayerSceneStallMonitor : NSObject

@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) NSMutableArray *stallMediaTimeList;
@property (retain, nonatomic) NSMutableArray *versionPointList;
@property (nonatomic) BOOL isFixReady;
@property (retain, nonatomic) NSDictionary *fixReadyExtra;
@property (retain, nonatomic) NSDictionary *stallCacheBaseTrackParams;

- (id)initWithDIContext:(id)a0;
- (id)baseTrackParams;
- (void)trackWithEvent:(id)a0 params:(id)a1;
- (BOOL)isBusinessDidReady;
- (void)handleVersionPointForMetaInfo:(id)a0;
- (void)handleStallAtMediaTime:(double)a0 isResume:(BOOL)a1;
- (void)reportStallIfNeedWithExtra:(id)a0;
- (id)currentTrackService;
- (void).cxx_destruct;
- (void)reset;

@end

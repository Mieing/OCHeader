@class NSDictionary, NSMutableArray;

@interface AWESearchAlienatedTabTrackManager : NSObject

@property (retain, nonatomic) NSMutableArray *trackCache;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (nonatomic) BOOL isReady;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)updateCommonParams:(id)a0;
- (void)sendEventIfReady:(id)a0 params:(id)a1;
- (void)sendCachedTrack;
- (void)handleAlienatedTabReveice:(id)a0;
- (void)handleAlienatedTabClick:(id)a0 extraParams:(id)a1;
- (void)handleAlienatedTabShow:(id)a0;
- (void)handleAlienatedTabShowFail:(id)a0 failType:(long long)a1;
- (id)failTypeStringWithFailType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end

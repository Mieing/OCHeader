@class NSMutableSet, NSMutableDictionary;

@interface WCFinderCoverLoadCostTime : NSObject

@property (retain, nonatomic) NSMutableSet *firstScreenFeeds;
@property (retain, nonatomic) NSMutableDictionary *resourceCostInfo;
@property (nonatomic) double beginTime;
@property (nonatomic) BOOL needRecord;

- (id)init;
- (void)recordFirstScreenFeed:(id)a0;
- (void)recordFirstScreenFeedCoverRender:(id)a0 beginTime:(double)a1 costTime:(unsigned long long)a2;
- (double)allResourceFinishTimePoint;
- (id)createMediaLoadInfo;
- (void).cxx_destruct;

@end

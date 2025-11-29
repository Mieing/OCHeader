@class NSMutableDictionary, NSDictionary, NSTimer, NSString;

@interface AWEMixVideoCollectionGuideManager : NSObject <AWEMixVideoCollectionGuideManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *videoPlayTimeDics;
@property (nonatomic) double lastShowMediaTime;
@property (nonatomic) unsigned long long guideV1;
@property (retain, nonatomic) NSDictionary *strategy;
@property (nonatomic) unsigned long long guideV2;
@property (nonatomic) BOOL isTriggerGuideV2;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long totalShowCount;
@property (nonatomic) BOOL needStop;
@property (nonatomic) BOOL hasShow;
@property (nonatomic) BOOL isTriggerModelStratege;
@property (nonatomic) long long mixVideoCollectionViewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)totalPlayTime;
- (long long)videoViewCount;
- (void)updatePlayTimeForKey:(id)a0 duration:(double)a1;
- (BOOL)needShowCollectionGuide:(id)a0;
- (void)cleanAllData;
- (void)recordMixVideoCollectionGuideShow;
- (void)startTimerWithBlock:(id /* block */)a0;
- (BOOL)needDismissCollectionGuide;
- (BOOL)canShowCollectionGuide;
- (BOOL)isTriggerMinTotalPlayTime;
- (double)minTotalPlayTimeV2_1;
- (long long)minVideoViewCountV2_1;
- (double)minTotalPlayTimeV2_2;
- (long long)minVideoViewCountV2_2;
- (BOOL)isTriggerMinAfterVideoViewCount;
- (BOOL)isTrggierMinAfterShowTime;
- (BOOL)isGuideV2ExitNew;
- (long long)minAfterShowTime;
- (double)singleVideoViewTime;
- (id)cacheKeyForShowCount;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;

@end

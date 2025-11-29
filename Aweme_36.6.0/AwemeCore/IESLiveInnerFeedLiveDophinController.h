@class NSString, NSDictionary, NSArray, IESLiveInnerFeedContext;
@protocol IESLiveDolphinService;

@interface IESLiveInnerFeedLiveDophinController : NSObject <IESLiveInnerFeedDisplayAction, IESLiveDolphinAction> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _hiddenbucket_rwlock;
}

@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) id<IESLiveDolphinService> dolphinService;
@property (copy, nonatomic) NSString *staiParamsForPitayaCommerceLiveInner;
@property (copy, nonatomic) NSString *userExtraInfo;
@property (copy, nonatomic) NSDictionary *startReRankDict;
@property (nonatomic) long long startRankLiveIndex;
@property (retain, nonatomic) NSArray *hiddenBuckets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startRerank:(unsigned long long)a0;
- (void)trackAdGapInfoWithIndex:(long long)a0;
- (void)trackFindResultDeduplication:(id)a0;
- (id)reRankFeedStreamWithDeleteIndexes:(id)a0 insertIndexes:(id)a1 insertModels:(id)a2;
- (void)innerFeedDidAppear;
- (void)innerFeedDidDisappear;
- (void)innerFeedDidEndDecelerating:(id)a0;
- (void)innerFeedDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (long long)currentLiveIndex;
- (void)setDolphinClientParams:(id)a0;
- (id)requestWebcastParamForCommercePitayaReRank;
- (id)itemsRoomDict;
- (long long)rankLiveIndex;
- (id)getHiddenBucketGids;
- (id)getHiddenBuckets;
- (void)updateHiddenBuckets:(id)a0;
- (void).cxx_destruct;
- (void)startTimer;
- (id)initWithContext:(id)a0;
- (void)pauseTimer;
- (id)currentDataSource;
- (void)dealloc;
- (id)clientParams;

@end

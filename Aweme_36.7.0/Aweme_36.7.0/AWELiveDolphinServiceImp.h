@class NSString, NSDictionary, IESLiveInnerFeedLiveDophinController;
@protocol AWEFeedDolphinAdapter;

@interface AWELiveDolphinServiceImp : NSObject <AWEDolphinSyncDataDelegate, IESLiveDolphinService>

@property (retain, nonatomic) id<AWEFeedDolphinAdapter> liveDolphinAdapter;
@property (copy, nonatomic) NSString *liveInnerStaiParams;
@property (copy, nonatomic) NSDictionary *lastShowedDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLiveInnerFeedLiveDophinController *liveDophinController;

- (long long)currentAwemeIndex;
- (void)startRerank:(unsigned long long)a0;
- (void)trackAdGapInfoWithIndex:(long long)a0;
- (void)trackFindResultDeduplication:(id)a0;
- (id)reRankFeedStreamWithDeleteIndexes:(id)a0 insertIndexes:(id)a1 insertModels:(id)a2;
- (id)transferModeltoDataDict:(id)a0 floor:(long long)a1 dataType:(long long)a2;
- (id)lastShowedAdModelConfig;
- (void)saveLastShowedAdModelConfigWithModel:(id)a0;
- (void)updateLastshowedAdModelConfigWithModel:(id)a0;
- (void)setupDolphinAdapter;
- (id)makeLiveDataDictMethod:(id)a0;
- (unsigned long long)getHTSRoomType:(id)a0;
- (void)setStaiParamsForPitayaCommerceLiveInner:(id)a0;
- (void)setDolphinClientParams:(id)a0;
- (id)requestWebcastParamForCommercePitayaReRank;
- (void).cxx_destruct;
- (void)startTimer;
- (void)cancelTimer;
- (id)init;
- (void)pauseTimer;
- (id)currentDataSource;
- (void)dealloc;
- (id)clientParams;

@end

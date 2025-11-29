@class NSString, NSArray, RxMultipleDelegate, NSMutableSet, NSMutableArray;
@protocol AWEMusicPlayerQueueDelegate;

@interface AWEMusicPlayerQueue : NSObject

@property (retain, nonatomic) NSString *queueID;
@property (nonatomic) unsigned long long currentPlayIndex;
@property (retain, nonatomic) NSMutableArray *modelList;
@property (retain, nonatomic) NSMutableArray *playList;
@property (retain, nonatomic) RxMultipleDelegate<AWEMusicPlayerQueueDelegate> *multipleDelegate;
@property (retain, nonatomic) NSMutableSet *uuidSet;
@property (retain, nonatomic) NSString *queueType;
@property (readonly, nonatomic) unsigned long long currentIndex;
@property (nonatomic) BOOL enableCycleToFirst;
@property (nonatomic) BOOL didEnterBackground;
@property (nonatomic) BOOL enableShuffle;
@property (nonatomic) BOOL forceLoopOn;
@property (nonatomic) unsigned long long loopMode;
@property (readonly, copy, nonatomic) NSString *loopModeDes;
@property (readonly, nonatomic) NSArray *playlistInQueue;

+ (id)loopModeAccessibilityLabelWithMode:(unsigned long long)a0;

- (id)currentPlayModel;
- (BOOL)canGoPrev;
- (BOOL)canGoNext;
- (id)nextPlayModelsWithCount:(long long)a0;
- (id)p_filtModels:(id)a0;
- (void)refreshPlayListWithModel:(id)a0;
- (void)playModelsDidChange;
- (void)appendPlayListWithPlayModels:(id)a0;
- (id)playModelWithId:(id)a0;
- (id)nextPlayModel;
- (id)prevPlayModel;
- (long long)playIndexForModel:(id)a0;
- (id)randomArray:(id)a0;
- (id)playModelWithOrderIndex:(unsigned long long)a0;
- (id)playerModelForNext:(BOOL)a0;
- (id)playerModelForNext:(BOOL)a0 fromIndex:(unsigned long long)a1;
- (BOOL)updateCurrentWithModel:(id)a0;
- (unsigned long long)p_nextModeOf:(unsigned long long)a0;
- (id)loopModeToString:(unsigned long long)a0;
- (long long)indexForModel:(id)a0;
- (BOOL)p_canAppenToQueue:(id)a0;
- (BOOL)cycleable;
- (BOOL)canPlayMusic:(id)a0;
- (id)initWithQueueId:(id)a0;
- (id)setPlayModels:(id)a0 current:(id)a1;
- (void)appendPlayModels:(id)a0;
- (void)removePlayModel:(id)a0;
- (BOOL)isModelInQueue:(id)a0;
- (id)playModelWithIndex:(unsigned long long)a0;
- (BOOL)goPrev;
- (BOOL)goNext;
- (unsigned long long)changeLoopMode;
- (id)toastStr;
- (id)music_queueHandler;
- (void)music_bindQueueHandlerWithDelegate:(id)a0;
- (id)models;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end

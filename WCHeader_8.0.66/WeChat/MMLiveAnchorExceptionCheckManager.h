@class MMFinderLiveTask, NSMutableArray, MMFinderLiveTaskId;
@protocol MMLiveAnchorExceptionCheckDelegate;

@interface MMLiveAnchorExceptionCheckManager : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) int count;
@property (copy, nonatomic) NSMutableArray *testArray;
@property (nonatomic) unsigned int remainTime;
@property (nonatomic) BOOL showingSilentTip;
@property (nonatomic) BOOL showingFeverTip;
@property (nonatomic) BOOL showingSoundQualityToBadTip;
@property (weak, nonatomic) id<MMLiveAnchorExceptionCheckDelegate> delegate;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;

- (id)initWithLiveTaskId:(id)a0;
- (void)dealloc;
- (void)onEnterBackground;
- (void)checkAllException:(unsigned int)a0;
- (void)handleCancelLiveSilentTip;
- (void)handleLiveSilent;
- (BOOL)checkLiveSilent;
- (BOOL)isLiveDataAllSilent:(id)a0;
- (void)handleCancelDeviceFeverTip;
- (void)handleDeviceFever;
- (BOOL)checkDeviceFever:(int)a0;
- (void)handleCancelSoundQualityToBadTip;
- (void)handleSoundQualityToBad;
- (BOOL)checkSoundQualityToBad;
- (BOOL)isHasSoundQualityBadData:(id)a0;
- (void)handleIntermittently;
- (BOOL)checkIntermittently;
- (BOOL)isHasSoundIntermittentlyData;
- (void)showWeakNetTipViewWithType:(unsigned long long)a0 isShow:(BOOL)a1;
- (void)cancelAnchorExceptionCheckActionWithType:(unsigned long long)a0;
- (void)reStartAudio;
- (id)getDataWithCount:(int)a0;
- (void)updateCurrentWillShowType:(unsigned long long)a0;
- (void).cxx_destruct;

@end

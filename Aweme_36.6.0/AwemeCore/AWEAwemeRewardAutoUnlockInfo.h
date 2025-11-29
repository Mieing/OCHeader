@class NSString, NSTimer, AWEAwemeModel, AWERewardAutoUnlockBtnConfig, AWEListDataController;

@interface AWEAwemeRewardAutoUnlockInfo : NSObject

@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSTimer *startLaunchTimer;
@property (retain, nonatomic) NSTimer *autoUnlockTimer;
@property (retain, nonatomic) AWEAwemeModel *previousModel;
@property (nonatomic) unsigned long long autoUnlockRewardState;
@property (nonatomic, getter=isManualUnlockNext) BOOL manualUnlockNext;
@property (retain, nonatomic) AWERewardAutoUnlockBtnConfig *unlockBtnConfig;
@property (readonly, weak, nonatomic) AWEAwemeModel *model;
@property (readonly, nonatomic) AWEAwemeModel *nextModel;

- (void)cancelAutoUnlock:(BOOL)a0;
- (void)refreshUnlockBtnConfig;
- (void)calculateAutoUnlockTimeWithVideoDuration:(double)a0;
- (void)invalidateAutoUnlockTimer;
- (BOOL)shouldAutoUnlockNextVideo;
- (BOOL)enableAutoUnlockForCount;
- (void)saveAutoUnlockCount;
- (void)invalidateTimers;
- (void)resetAutoUnlockCount;
- (id)initWithDataController:(id)a0 referString:(id)a1 model:(id)a2;
- (void)invalidateStartLaunchTimer;
- (id)getUnlockBtnConfig;
- (id)getNextAwemeModel;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end

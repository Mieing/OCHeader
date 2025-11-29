@class NSTimer, NSHashTable;

@interface IESLLLiveShelfGlobalTimer : NSObject

@property (retain, nonatomic) NSTimer *countDownTimer;
@property (retain, nonatomic) NSHashTable *objectList;
@property (nonatomic) double localTimeInit;
@property (nonatomic) double serverTimeInit;

+ (id)shareInstance;

- (double)currentServerTime;
- (void)registerObject:(id)a0;
- (void)updateServerTime:(double)a0;
- (void)_countDown;
- (void)startGlobalTimer;
- (void)stopGlobalTimer;
- (void)unRegisterObject:(id)a0;
- (void).cxx_destruct;

@end

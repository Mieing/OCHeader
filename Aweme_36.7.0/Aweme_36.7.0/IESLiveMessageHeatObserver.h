@class NSString, NSTimer, NSMutableArray, IESLiveMessageHeatConfig;
@protocol IESLiveMessageHeatDelegate;

@interface IESLiveMessageHeatObserver : NSObject <IESLiveValueChangedDelegate>

@property (retain, nonatomic) IESLiveMessageHeatConfig *config;
@property (retain, nonatomic) NSMutableArray *messageArrays;
@property (nonatomic) unsigned long long currentLevel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isInCD;
@property (nonatomic) unsigned long long lastCountRecord;
@property (weak, nonatomic) id<IESLiveMessageHeatDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)judgeHeatUpState;
- (long long)countOfMessages;
- (void)setupTimerIfNeed;
- (void)mutableArrayDidChangedValue:(id)a0;
- (void)addMessageArraysToObserve:(id)a0;
- (void)addMessageArrayToObserve:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)setup;

@end

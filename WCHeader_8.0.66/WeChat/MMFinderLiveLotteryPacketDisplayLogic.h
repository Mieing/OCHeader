@class LOTAnimationView, MMFinderLiveLotteryInfo, MMFinderLiveLittleLotteryPacketView;
@protocol LiveLotteryPacketDisplayDelegate;

@interface MMFinderLiveLotteryPacketDisplayLogic : NSObject

@property (retain, nonatomic) MMFinderLiveLotteryInfo *currentLotteryInfo;
@property (nonatomic) unsigned int currentLotteryStatus;
@property (retain, nonatomic) LOTAnimationView *largeLotteryPacket;
@property (retain, nonatomic) MMFinderLiveLittleLotteryPacketView *littleLotteryPacket;
@property (nonatomic) BOOL isLittlePacketShow;
@property (copy, nonatomic) id /* block */ invokeOpenLotteryPanelBlock;
@property (copy, nonatomic) id /* block */ countDownRemainTimeCallback;
@property (copy, nonatomic) id /* block */ lotteryCompleteCallback;
@property (readonly, nonatomic) long long currentState;
@property (weak, nonatomic) id<LiveLotteryPacketDisplayDelegate> displayDelegate;

+ (id)createLargeLotteryPacketView;
+ (id)createLittleLotteryPacketView;

- (id)initWithLargeLotteryPacketView:(id)a0;
- (void)initNotification;
- (void)updateDisplayingLotteryInfo:(id)a0;
- (void)updateCurrentLotteryInfo:(id)a0;
- (BOOL)checkLotteryCountDownTimeInValid;
- (void)clearCurrentLotteryState;
- (void)updateCurrentLotteryStatus;
- (void)startDisplayLargeLotteryPacketAnimated;
- (void)startDisplayLittleLotteryPacketAnimated;
- (unsigned int)getModifiedRemainTime;
- (void)stopDisplayLargeLotteryPacket;
- (void)stopDisplayLittleLotteryPacket;
- (unsigned int)currentRemainTime;
- (void)showLittleLotteryPacket;
- (void)checkAndShowLittleLotteryPacket;
- (void)hideLittleLotteryPacket;
- (void)invokeCountDownFinished;
- (void)handleLittlePacketTapGesture:(id)a0;
- (BOOL)isCountDownFinished;
- (void)stopCountDown;
- (void)onEnterForeground;
- (void).cxx_destruct;

@end

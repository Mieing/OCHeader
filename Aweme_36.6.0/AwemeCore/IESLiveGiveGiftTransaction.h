@class IESLiveGiveGiftConfiguration, NSString, IESLiveCountTimer, IESLivePBBaseMessage;
@protocol IESLiveGiveGiftTransactionDelegate;

@interface IESLiveGiveGiftTransaction : NSObject

@property (retain, nonatomic) IESLiveGiveGiftConfiguration *config;
@property (nonatomic) BOOL giveGiftSuccess;
@property (nonatomic) unsigned long long comboCount;
@property (nonatomic) unsigned long long groupCount;
@property (nonatomic) BOOL comboUpgrade;
@property (nonatomic) unsigned long long upgradeCount;
@property (nonatomic) long long state;
@property (nonatomic) BOOL specialGiveGiftError;
@property (retain, nonatomic) IESLivePBBaseMessage *sendResponseData;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) unsigned long long maxCountDownSecond;
@property (nonatomic) unsigned long long currentSecond;
@property (nonatomic) BOOL forceEnd;
@property (nonatomic) long long currentParallelHandlingCount;
@property (nonatomic) long long expectedSendGiftTotalCount;
@property (nonatomic) BOOL useLynxDIYCard;
@property (weak, nonatomic) id<IESLiveGiveGiftTransactionDelegate> delegate;
@property (copy, nonatomic) NSString *firstSendSuccFromGiftPanelTimeIntervalStr;
@property (copy, nonatomic) NSString *aggregatedID;

- (void)sendWithParams:(id)a0 successCallback:(id /* block */)a1 errorCallback:(id /* block */)a2;
- (void)onTransactionBegin;
- (void)p_deleteCachedAssemblyDataUnsupportedWithConfig:(id)a0;
- (void)p_rearrangeCustomizedCardCacheWithConfig:(id)a0 sendCardConfig:(id)a1;
- (void)onTransactionEnd;
- (void)sendWithSuccessCallback:(id /* block */)a0 errorCallback:(id /* block */)a1;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)resetTimer;
- (void)startTimer;
- (void)reset;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)end;
- (void)setupTimer;
- (void)loop;

@end

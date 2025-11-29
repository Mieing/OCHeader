@class NSObject, NSMutableDictionary, IESLiveGiftSticker, NSNumber, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESLiveBaseGiftStickerQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *stickerBuf;
@property (nonatomic) BOOL isSendingTogether;
@property (retain, nonatomic) NSNumber *readyCount;
@property (nonatomic) long long sendTogetherCount;
@property (nonatomic) double togetherStartTime;
@property (retain, nonatomic) NSMutableDictionary *userMap;
@property (retain, nonatomic) NSMutableDictionary *giftMap;
@property (nonatomic) long long sendTogetherScore;
@property (nonatomic) BOOL enableBreak;
@property (copy, nonatomic) id /* block */ next;
@property (copy, nonatomic) id /* block */ end;
@property (copy, nonatomic) id /* block */ endOfGiftPlay;
@property (copy, nonatomic) id /* block */ endOfSendTogether;
@property (copy, nonatomic) id /* block */ delayEndTime;
@property (copy, nonatomic) id /* block */ dispatchTogetherAsset;
@property (retain, nonatomic) IESLiveGiftSticker *currentSticker;
@property (nonatomic) double stickerDelayInterval;
@property (retain, nonatomic) NSNumber *roomID;

- (id)initWithLabel:(id)a0 enableBreakAsset:(BOOL)a1;
- (BOOL)currentSendTogetherCouldPushed;
- (void)addGiftInfo:(id)a0;
- (void)insertNode:(id)a0 into:(id)a1;
- (void)loopNextIfNeeded:(BOOL)a0;
- (void)interruptStickerIfNeeded:(id)a0;
- (void)endPlayIfNeeded;
- (void)loopNext;
- (void)trackSendTogetherShow;
- (void)insertToFront:(id)a0;
- (void)getGiftQueueTaskCountWithBlock:(id /* block */)a0;
- (void)startSendingTogether:(id)a0;
- (void)pushTogetherAssetWithCount:(id)a0;
- (void)stopCurrentSticker;
- (void)recordSendTogetherInteractiveScore:(long long)a0;
- (void).cxx_destruct;
- (void)destroy;
- (void)insert:(id)a0;
- (void)dealloc;
- (long long)size;
- (void)addUserInfo:(id)a0;
- (void)restartTimer;

@end

@class MMFinderLiveGiftPlayItem, NSString;

@interface MMFinderLiveGiftAttackRecord : NSObject

@property (retain, nonatomic) MMFinderLiveGiftPlayItem *playItem;
@property (nonatomic) BOOL isGiftAttackStart;
@property (readonly, nonatomic) NSString *recordId;
@property (copy, nonatomic) id /* block */ giftAttackEndCallback;
@property (copy, nonatomic) id /* block */ giftAttackGetAutoEndDurationCallback;
@property (copy, nonatomic) id /* block */ rewardCompletion;

- (id)initWithPlayItem:(id)a0;
- (void)onGiftAttackStart;
- (void)onGiftAttackEnd:(long long)a0;
- (void)invokeAutoEnd;
- (double)autoEndDuration;
- (void).cxx_destruct;

@end

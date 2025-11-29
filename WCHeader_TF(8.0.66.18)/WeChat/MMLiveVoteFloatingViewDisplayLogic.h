@class MMTimer, NSString, MMLiveVoteFloatingView;
@protocol MMLiveVoteFloatingViewDisplayLogicDelegate;

@interface MMLiveVoteFloatingViewDisplayLogic : NSObject

@property (retain, nonatomic) MMLiveVoteFloatingView *voteFloatingView;
@property (retain, nonatomic) MMTimer *floatingViewHideTimer;
@property (retain, nonatomic) NSString *delayHideVotingId;
@property (nonatomic) BOOL hidden;
@property (weak, nonatomic) id<MMLiveVoteFloatingViewDisplayLogicDelegate> delegate;

- (id)initWithView:(id)a0;
- (void)toggleFloatingViewHidden:(BOOL)a0;
- (void)scheduleAutoHideFloatingViewTimerWithDelay:(double)a0;
- (void)onHideFloatingView;
- (void)invalidateAutoHide;
- (void)updateUIWithVotingInfo:(id)a0;
- (void).cxx_destruct;

@end

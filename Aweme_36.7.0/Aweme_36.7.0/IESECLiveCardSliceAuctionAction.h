@class IESECLiveContext, NSArray, NSString, IESECLiveCardViewModelV2, IESECLiveSliceCardView, IESECGCDTimer;
@protocol IESECLiveCardSliceCustomizedActionDelegate;

@interface IESECLiveCardSliceAuctionAction : NSObject <IESECLiveCardSliceCustomizedActionProtocol>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) IESECLiveSliceCardView *cardView;
@property (retain, nonatomic) IESECLiveCardViewModelV2 *cardViewModel;
@property (retain, nonatomic) IESECGCDTimer *countdownTimer;
@property (retain, nonatomic) NSArray *actionNames;
@property (weak, nonatomic) id<IESECLiveCardSliceCustomizedActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateCountdownTimer;
- (id)initWithLiveContext:(id)a0 sliceCardView:(id)a1;
- (BOOL)executeIfNeededWithActionName:(id)a0 event:(id)a1;
- (BOOL)checkExecuteWithActionName:(id)a0;
- (long long)getAuctionEndIntervalWithEvent:(id)a0;
- (void)auctionCountDownWithInterval:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

@class MMFinderLiveTaskId;

@interface MMFinderLivePrizeActivitiesRouterActionSheetConfig : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (copy, nonatomic) id /* block */ onLotteryItemClicked;
@property (copy, nonatomic) id /* block */ onRedPacketItemClicked;
@property (copy, nonatomic) id /* block */ onDismissed;

- (id)initWithTaskID:(id)a0;
- (void).cxx_destruct;

@end

@protocol NewTipsNetworkLogicDelegate;

@interface NewTipsNetworkLogic : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<NewTipsNetworkLogicDelegate> delegate;

- (void)requestPushNewTipsWithConfig:(id)a0;
- (void)handlePushNewTipsResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

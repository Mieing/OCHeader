@class MMFinderLivePromoteDisplayLease;

@interface MMFinderLivePromoteDisplayLogicLeasedPubbleLifecycleCallbackParameter : MMFinderLivePromoteDisplayLogicPubbleLifecycleCallbackParameter

@property (retain, nonatomic) MMFinderLivePromoteDisplayLease *lease;

- (unsigned long long)type;
- (id)promotePubbleView;
- (id)promoteMsgInfo;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)a0;
- (void).cxx_destruct;

@end

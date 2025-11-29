@class MMFinderLivePromotePubbleContainerView;

@interface MMFinderLivePromoteDisplayLogicPromotionPubbleLifecycleCallbackParameter : MMFinderLivePromoteDisplayLogicPubbleLifecycleCallbackParameter

@property (retain, nonatomic) MMFinderLivePromotePubbleContainerView *promotePubbleContainerView;

- (unsigned long long)type;
- (id)promotePubbleView;
- (id)promoteMsgInfo;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)a0;
- (void).cxx_destruct;

@end

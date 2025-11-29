@class AWEHPChannelBubbleModel;

@interface AWEMessageReachBubbleCallbackContext : AWEMessageReachComponentCallbackContext

@property (nonatomic) long long result;
@property (nonatomic) long long dismissType;
@property (retain, nonatomic) AWEHPChannelBubbleModel *bubbleModel;

- (void).cxx_destruct;

@end

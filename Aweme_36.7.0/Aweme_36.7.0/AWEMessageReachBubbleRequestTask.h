@class NSString;
@protocol AWEHPChannelBubbleModelProtocol;

@interface AWEMessageReachBubbleRequestTask : NSObject

@property (copy, nonatomic) NSString *channelID;
@property (retain, nonatomic) id<AWEHPChannelBubbleModelProtocol> bubbleModel;
@property (copy, nonatomic) id /* block */ tryShowBubbleBlock;

- (void).cxx_destruct;
- (id)description;

@end

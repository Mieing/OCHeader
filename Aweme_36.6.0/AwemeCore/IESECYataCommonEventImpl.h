@class NSMutableSet;
@protocol YataInstanceInterface;

@interface IESECYataCommonEventImpl : NSObject

@property (weak, nonatomic) id<YataInstanceInterface> yataInstance;
@property (retain, nonatomic) NSMutableSet *subscribedBridgeEvents;

- (id)initWithYataInstance:(id)a0;
- (void)selfDelayWithEventData:(id)a0;
- (void)selfSubscribeBridgeEventWithEventData:(id)a0;
- (void)selfUnsubscribeBridgeEventWithEventData:(id)a0;
- (void).cxx_destruct;

@end

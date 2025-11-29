@class NSMutableArray;

@interface IESGCPPropBridgeSubscriber : NSObject

@property (retain, nonatomic) NSMutableArray *subscriberList;

- (void)unregisterSubscriber;
- (void)registerEventSubscriber;
- (void)registerSubscriberWithName:(id)a0 action:(id /* block */)a1;
- (BOOL)enableHandleAction;
- (void).cxx_destruct;

@end

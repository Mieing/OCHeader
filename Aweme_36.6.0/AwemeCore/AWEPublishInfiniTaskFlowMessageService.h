@class NSString, NSHashTable;
@protocol AWEPublishInfiniTaskFlowMessageServiceSubscriber;

@interface AWEPublishInfiniTaskFlowMessageService : NSObject <AWEPublishInfiniTaskFlowMessageServiceProtocol>

@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) id<AWEPublishInfiniTaskFlowMessageServiceSubscriber> multicastDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)addSubscriber:(id)a0;

@end

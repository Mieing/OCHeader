@class IESLiveInteractiveLinkMulticastDelegate, NSString, NSNumber, IESLiveIMPaaSWorker;
@protocol IESLiveInteractGuestLinkMonitorProtocol;

@interface IESLiveInteractionGuestLinkerMsgDispatcher : NSObject <HTSLiveMessageSubscriber>

@property (copy, nonatomic) NSNumber *channelId;
@property (retain, nonatomic) IESLiveIMPaaSWorker *worker;
@property (retain, nonatomic) IESLiveInteractiveLinkMulticastDelegate *delegate;
@property (weak, nonatomic) id<IESLiveInteractGuestLinkMonitorProtocol> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setupIMCoreConfig;
- (void)destroyMessageChannel;
- (void)traceLinkWithEventName:(id)a0 extra:(id)a1 msgId:(long long)a2;
- (void)joinMessageChannel:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)messageReceived:(id)a0;

@end

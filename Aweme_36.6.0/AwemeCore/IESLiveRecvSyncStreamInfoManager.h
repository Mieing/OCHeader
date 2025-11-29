@class NSString;
@protocol HTSLiveMessageDispatcherAdapter;

@interface IESLiveRecvSyncStreamInfoManager : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<HTSLiveMessageDispatcherAdapter> dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end

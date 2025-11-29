@class NSString, NSHashTable;

@interface AWELivePreStreamMessageManager : NSObject <AWELivePreStreamMessageProvider>

@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)removePreViewSubscrber:(id)a0;
- (void)addPreViewSubscrber:(id)a0;
- (void)onMSequenceSwitchWith:(id)a0;
- (void)onMSequenceSubMessageReceived:(id)a0;
- (void)enumerate:(id)a0 sendMessage:(id)a1 withDict:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dispatchMessage:(id)a0;
- (void)messageReceived:(id)a0;

@end

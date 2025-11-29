@class NSString, NSHashTable;

@interface AWELivePreStreamSEIManager : NSObject <AWELivePreStreamSEIProvider>

@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removePreViewSubscrber:(id)a0;
- (void)addPreViewSubscrber:(id)a0;
- (void)onReceivePlayerSEI:(id)a0;
- (void)dispatchSEI:(id)a0;
- (void)enumerate:(id)a0 sendSEI:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

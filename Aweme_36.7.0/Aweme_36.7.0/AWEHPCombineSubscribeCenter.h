@class NSLock, NSMutableDictionary, NSString;
@protocol AWEHPCombineSubscribeCenterDelegate;

@interface AWEHPCombineSubscribeCenter : NSObject <AWEHPCombineSubscriberWrapperDelegate>

@property (weak, nonatomic) id<AWEHPCombineSubscribeCenterDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *subscriberMap;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAllWrappers;
- (id)getWrapperWithBusinessID:(id)a0;
- (void)wrapper:(id)a0 sendRequestWithBody:(id)a1 completion:(id /* block */)a2;
- (void)addSubscriberWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setup;
- (void)removeSubscriber:(id)a0;

@end

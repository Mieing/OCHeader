@class NSString;
@protocol AWEHPCombineSubscriberWrapperDelegate, AWEHPNetCombineSubscriberProtocol;

@interface AWEHPCombineSubscriberWrapper : NSObject <AWEHPNetCombineSubscriberAbility>

@property (weak, nonatomic) id<AWEHPCombineSubscriberWrapperDelegate> delegate;
@property (copy, nonatomic) NSString *businessID;
@property (retain, nonatomic) id<AWEHPNetCombineSubscriberProtocol> subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendRequestWithBody:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkCanRequest:(id)a0;
- (void)getRequestBody:(id)a0 callback:(id /* block */)a1;
- (void)handleResponseWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)handleRequest:(id)a0;
- (void)setup;

@end

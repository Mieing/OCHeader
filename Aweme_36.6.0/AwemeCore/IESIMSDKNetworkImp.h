@class NSOperationQueue, NSString;

@interface IESIMSDKNetworkImp : NSObject <TIMXClientProtocol>

@property (readonly, nonatomic) BOOL shouldCreateRequestAsync;
@property (readonly, nonatomic) NSOperationQueue *requestConstructionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sendRequestWithMethod:(id)a0 url:(id)a1 timeout:(double)a2 priority:(float)a3 headers:(id)a4 body:(id)a5 withCallback:(id /* block */)a6;
- (void).cxx_destruct;
- (id)init;

@end

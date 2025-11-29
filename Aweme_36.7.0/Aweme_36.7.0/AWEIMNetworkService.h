@class NSObject;
@protocol AWEIMNetworkStrategyControllerProtocol;

@interface AWEIMNetworkService : IESIMNetwork

@property (retain) NSObject<AWEIMNetworkStrategyControllerProtocol> *strategyMgr;

+ (id)requestWithRequest:(id)a0;
+ (id)strategyController;
+ (id)_createIMStrategyNetworkTask:(id)a0;
+ (id)networkTaskWithTask:(id)a0 requestModel:(id)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end

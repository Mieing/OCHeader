@class IESLivePreloadRequestAPI, NSMutableDictionary, NSString, IESLivePreloadRequestResult;
@protocol IESLivePreloadRequestImplProtocol;

@interface IESLivePreloadRequestUnit : NSObject

@property (retain, nonatomic) IESLivePreloadRequestAPI *requestApi;
@property (retain, nonatomic) IESLivePreloadRequestResult *requestResult;
@property (retain, nonatomic) NSMutableDictionary *subscribeCompletes;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long requestState;
@property (retain, nonatomic) id<IESLivePreloadRequestImplProtocol> requestImpl;

- (BOOL)isNormalRequest;
- (void)subscribeIdentifier:(id)a0 complete:(id /* block */)a1;
- (void)removeSubscribeIdentifier:(id)a0;
- (void)dealRequestResult:(id)a0 error:(id)a1;
- (void)notifyComplete;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)run;

@end

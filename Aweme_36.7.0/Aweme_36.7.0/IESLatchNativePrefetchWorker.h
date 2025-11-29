@class NSString, NSMutableDictionary, IESLatchConfiguration;
@protocol IESLatchNativePrefetchWorkerDelegate, IESLatchTemplateOutput;

@interface IESLatchNativePrefetchWorker : NSObject <IESLatchNativePrefetchWorkerProtocol>

@property (copy, nonatomic) NSString *business;
@property (retain, nonatomic) NSMutableDictionary *runningRequests;
@property (retain, nonatomic) NSMutableDictionary *memo;
@property (retain, nonatomic) id<IESLatchTemplateOutput> latchTemplateOutput;
@property (retain, nonatomic) IESLatchConfiguration *conf;
@property (weak, nonatomic) id<IESLatchNativePrefetchWorkerDelegate> dataDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prefetchForSchema:(id)a0 withVariable:(id)a1;
- (void)prefetchAPI:(id)a0;
- (BOOL)checkPageVersion:(id)a0 url:(id)a1;
- (id)initWithCapability:(id)a0 business:(id)a1 dataDelegate:(id)a2;
- (id)prefetchForSchema:(id)a0 globalProps:(id)a1 withVariables:(id)a2 event:(id)a3;
- (id)getAPIPath:(id)a0;
- (void)startNetworkRequest:(id)a0 completion:(id /* block */)a1;
- (void)fillMemoData:(id)a0 forRequest:(id)a1;
- (void).cxx_destruct;

@end

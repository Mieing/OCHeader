@class NSString, BDXRLOperator, BDXRLUrlParamConfig;
@protocol BDXRLMonitorDelegate;

@interface BDXRLBaseProcessor : NSObject <BDXResourceLoaderProcessorProtocol>

@property (nonatomic) BOOL isCanceled;
@property (retain, nonatomic) BDXRLUrlParamConfig *paramConfig;
@property (retain, nonatomic) BDXRLOperator *advancedOperator;
@property (copy, nonatomic) NSString *debugMessage;
@property (weak, nonatomic) id<BDXRLMonitorDelegate> monitorDelegate;
@property (readonly, copy, nonatomic) NSString *resourceLoaderName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchResourceWithURL:(id)a0 loaderConfig:(id)a1 taskConfig:(id)a2 resolve:(id /* block */)a3 reject:(id /* block */)a4;
- (id)initWithMonitorDelegate:(id)a0;
- (void).cxx_destruct;
- (void)cancelLoad;
- (void)dealloc;

@end

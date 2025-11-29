@class HybridRLUrlParamConfig, HybridRLOperator, NSString;

@interface HybridRLBaseProcessor : NSObject <HybridResourceLoaderProcessorProtocol>

@property (nonatomic) BOOL isCanceled;
@property (retain, nonatomic) HybridRLUrlParamConfig *paramConfig;
@property (retain, nonatomic) HybridRLOperator *advancedOperator;
@property (copy, nonatomic) NSString *debugMessage;
@property (readonly, copy, nonatomic) NSString *resourceLoaderName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchResourceWithURL:(id)a0 container:(id)a1 loaderConfig:(id)a2 taskConfig:(id)a3 resolve:(id /* block */)a4 reject:(id /* block */)a5;
- (void).cxx_destruct;
- (void)cancelLoad;
- (id)init;
- (void)dealloc;

@end

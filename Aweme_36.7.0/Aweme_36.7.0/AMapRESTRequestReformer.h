@class AMapNetworkPerformanceModel, AMapNetworkFailModel;

@interface AMapRESTRequestReformer : AMapRequestReformer

@property (weak, nonatomic) AMapNetworkFailModel *failModel;
@property (weak, nonatomic) AMapNetworkPerformanceModel *sucModel;
@property (nonatomic) BOOL autoAddXInfo;

- (BOOL)isSupportAPM;
- (void)reformParameters:(id)a0 result:(id /* block */)a1;
- (id)httpHeaderAboutAPM;
- (BOOL)canDegrade;
- (void)request:(id)a0 response:(id)a1 metrics:(id)a2 completeWithError:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end

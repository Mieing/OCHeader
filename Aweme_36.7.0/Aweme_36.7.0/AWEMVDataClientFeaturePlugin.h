@class NSString, AWEMVChannelPageContext;

@interface AWEMVDataClientFeaturePlugin : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildRequestParamsWithContext:(id)a0;
- (void)didFilterResponse:(id)a0 context:(id)a1;
- (id)invalidReasonForUGFeatureForRequest:(id)a0;
- (unsigned long long)ugTypeFromChannelType:(unsigned long long)a0;
- (void).cxx_destruct;

@end

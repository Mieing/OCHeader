@class NSString, AWEMVChannelPageContext;

@interface AWEMVDataUGPlugin : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildRequestParamsWithContext:(id)a0;
- (void)willFilterResponse:(id)a0 context:(id)a1;
- (void)didFilterResponse:(id)a0 context:(id)a1;
- (void)tidyDidUpdateToFullModel:(id)a0 context:(id)a1 error:(id)a2;
- (id)recommendUGInfo;
- (id)watchVideoParams;
- (void)trackUGReceiveWithContext:(id)a0 responseModel:(id)a1;
- (void)attachUGShowModelWithContext:(id)a0 responseModel:(id)a1;
- (id)generateUGInfoTrackerModelWithRequest:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

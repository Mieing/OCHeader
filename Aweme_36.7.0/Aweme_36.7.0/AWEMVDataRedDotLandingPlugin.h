@class NSString, AWEMVChannelPageContext;

@interface AWEMVDataRedDotLandingPlugin : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildRequestParamsWithContext:(id)a0;
- (void).cxx_destruct;

@end

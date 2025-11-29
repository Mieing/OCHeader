@class NSString, AWEMVChannelPageContext;

@interface AWEMVDataCoverRequestPreConnectPlugin : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willRequestWithContext:(id)a0;
- (void).cxx_destruct;

@end

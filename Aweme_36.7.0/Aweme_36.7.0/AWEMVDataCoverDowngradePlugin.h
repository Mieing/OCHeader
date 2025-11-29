@class NSString, AWEMVChannelPageContext;

@interface AWEMVDataCoverDowngradePlugin : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildRequestParamsWithContext:(id)a0;
- (BOOL)shouldDowngradeForLowDevice;
- (BOOL)shouldDowngradeForFirstFetch:(id)a0;
- (BOOL)shouldDowngradeForWeakNet;
- (BOOL)shouldDowngradeForCardSize;
- (void).cxx_destruct;

@end

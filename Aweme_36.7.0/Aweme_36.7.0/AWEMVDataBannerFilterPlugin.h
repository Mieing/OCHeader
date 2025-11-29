@class NSString, AWEMVChannelPageContext;

@interface AWEMVDataBannerFilterPlugin : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFilterResponse:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end

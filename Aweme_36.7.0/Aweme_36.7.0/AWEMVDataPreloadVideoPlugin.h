@class NSString, AWEMVChannelPreloadManager, AWEMVChannelPageContext;

@interface AWEMVDataPreloadVideoPlugin : NSObject <AWEMVDataPluginProtocol>

@property (retain, nonatomic) AWEMVChannelPreloadManager *preloadManager;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFilterResponse:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end

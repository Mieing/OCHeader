@class NSString, AWEMVChannelPageContext;

@interface AWEMVDataCoverURLHostSortPlugin : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willFilterResponse:(id)a0 context:(id)a1;
- (void)sortURL:(id)a0;
- (void).cxx_destruct;

@end

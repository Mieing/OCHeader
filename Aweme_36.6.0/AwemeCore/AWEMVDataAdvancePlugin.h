@class NSString, AWEMVChannelPageContext;

@interface AWEMVDataAdvancePlugin : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldInterceptFetchWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

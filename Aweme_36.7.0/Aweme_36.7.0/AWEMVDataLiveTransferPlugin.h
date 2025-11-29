@class NSString, AWEMVChannelPageContext;

@interface AWEMVDataLiveTransferPlugin : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveModuleService;
- (id)transferAwemeListIfNeededWithArray:(id)a0 isInitFetch:(BOOL)a1;
- (id)transferAwemeModelForLive:(id)a0;
- (void)onFilterResponse:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end

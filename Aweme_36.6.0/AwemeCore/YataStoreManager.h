@class YataProtocolMergeTool, YataStore, YataEventChainDataManager;

@interface YataStoreManager : YataModule

@property (retain, nonatomic) YataStore *store;
@property (retain, nonatomic) YataEventChainDataManager *eventChainDataManager;
@property (retain, nonatomic) YataProtocolMergeTool *mergeTool;

- (id)initWithYataInstance:(id)a0;
- (void)initEventChainDataManager;
- (void).cxx_destruct;
- (void)initStore;

@end

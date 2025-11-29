@class BDECRabbiFlyDynamicSupervisor;
@protocol BDXViewContainerServiceProtocol;

@interface BDECRabbiFlyAnnieX : NSObject

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) id<BDXViewContainerServiceProtocol> containerService;

- (id)initWithSupervisor:(id)a0;
- (id)createAnnieXView:(id)a0 deleget:(id)a1;
- (id)createAnnieXCardModelWithURL:(id)a0 initData:(id)a1;
- (void)asyncCreateAnnieXCardModelWithURL:(id)a0 initData:(id)a1 completion:(id /* block */)a2;
- (void)bindInitData:(id)a0 cardModel:(id)a1 view:(id)a2;
- (id)generateInitWithServerData:(id)a0 clientData:(id)a1 serverDataStorage:(id)a2;
- (void).cxx_destruct;

@end

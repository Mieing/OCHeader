@protocol IESECPDPDataControllerService;

@interface IESECPDPNetTaskComponent : IESECPDPBaseComponent

@property (weak, nonatomic) id<IESECPDPDataControllerService> dataController;
@property (nonatomic) BOOL hasCallback;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL hasRendered;
@property (copy, nonatomic) id /* block */ netCallback;
@property (nonatomic) unsigned long long type;

- (void)loadComponent;
- (void)containerDidRender;
- (void)packApiBack;
- (void)callBlockFun;
- (void).cxx_destruct;

@end

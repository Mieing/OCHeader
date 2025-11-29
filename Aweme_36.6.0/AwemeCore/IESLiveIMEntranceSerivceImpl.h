@class NSString;

@interface IESLiveIMEntranceSerivceImpl : NSObject <IESHYHybridViewLifecycleProtocol, IESLiveIMEntranceService>

@property (copy, nonatomic) id /* block */ sizeChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidCreated:(id)a0;
- (id)getLiveLynxContainerForIMWithURL:(id)a0 fallBackURL:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 changeBlock:(id /* block */)a3;
- (id)appendQueryURLWithBaseUrl:(id)a0;
- (void)registerBridge:(id)a0 changeBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end

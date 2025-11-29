@class NSString;
@protocol IESGCPAlertFactoryService;

@interface IESGCPCGAlertRouterImpl : NSObject <IESGCPDIContextSubscriber, IESGCPCGAlertRouter>

@property (retain, nonatomic) id<IESGCPAlertFactoryService> alertFactoryService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)showAlertWithTitle:(id)a0 description:(id)a1 actionTitle:(id)a2 cancelTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)showAlertWithTitle:(id)a0 description:(id)a1 actionTitle:(id)a2 cancelTitle:(id)a3 forceDisplay:(BOOL)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (void)showAlertWithTitle:(id)a0 description:(id)a1 imageName:(id)a2 actionTitle:(id)a3 cancelTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (void)showAlertWithTitle:(id)a0 description:(id)a1 imageName:(id)a2 actionTitle:(id)a3 cancelTitle:(id)a4 forceDisplay:(BOOL)a5 actionBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (void)showAlertWithTitle:(id)a0 description:(id)a1 imageName:(id)a2 actionStyle:(long long)a3 actionTitle:(id)a4 cancelTitle:(id)a5 forceDisplay:(BOOL)a6 actionBlock:(id /* block */)a7 cancelBlock:(id /* block */)a8;
- (void).cxx_destruct;

@end

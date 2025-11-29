@interface IvyPluginServiceImp : NSObject <IvyKit.IvyPluginService>

- (id)templateViewWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateURL:(id)a1 initData:(id)a2 xBridgeInsMethods:(id)a3 globalProps:(id)a4 lifecycle:(id)a5;
- (void)updateTemplateWithView:(id)a0 with:(id)a1 isReuse:(BOOL)a2;
- (BOOL)isTemplateExistFor:(id)a0;
- (void)loadTemplateIdWithView:(id)a0 with:(id)a1 initData:(id)a2;
- (void)loadTemplateDataWithView:(id)a0 with:(id)a1 initData:(id)a2;
- (id)prelayoutWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateURL:(id)a1 initData:(id)a2;
- (id)prelayoutWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateData:(id)a1 initData:(id)a2;
- (id)templateViewWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateData:(id)a1 initData:(id)a2 xBridgeInsMethods:(id)a3 globalProps:(id)a4 lifecycle:(id)a5;
- (void)prelayoutWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateURL:(id)a1 initData:(id)a2 completion:(id /* block */)a3;
- (void)prelayoutWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateData:(id)a1 initData:(id)a2 completion:(id /* block */)a3;
- (id)init;

@end

@class NSString, NSHashTable;

@interface IESGCPAlertFactoryService_Douyin : NSObject <IESGCPAlertFactoryService>

@property (retain, nonatomic) NSHashTable *showingDUXAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showAlertWithTitle:(id)a0 description:(id)a1 headerImage:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 customCornerRadius:(double)a5 actionBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (id)showDUXAlertWithTitle:(id)a0 description:(id)a1 headerImage:(id)a2 actionStyle:(long long)a3 actionButtonTitle:(id)a4 cancelButtonTitle:(id)a5 onView:(id)a6 actionBlock:(id /* block */)a7 cancelBlock:(id /* block */)a8;
- (void)addShowingDUXAlert:(id)a0;
- (id)showCustomDUXAlertWithTitle:(id)a0 description:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 onView:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (id)showAlertWithTitle:(id)a0 description:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 customCornerRadius:(double)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (id)showAlertWithTitle:(id)a0 description:(id)a1 headerImage:(id)a2 actionTitle:(id)a3 actionHandler:(id /* block */)a4;
- (id)showDUXAlertWithTitle:(id)a0 description:(id)a1 headerImage:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 onView:(id)a5 actionBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (void)dismissCurrentDUXAlert:(id)a0;
- (void)changeCustomDUXAlert:(id)a0 bodyAttributedDescription:(id)a1;
- (id)showCustomDUXAlertWithTitle:(id)a0 description:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void).cxx_destruct;

@end

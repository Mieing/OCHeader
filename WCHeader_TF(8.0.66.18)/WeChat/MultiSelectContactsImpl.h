@class NSString, NSDictionary, LiteAppDynamicModuleCallback, UIViewController;

@interface MultiSelectContactsImpl : NSObject <MultiSelectContactsViewControllerDelegate>

@property (retain, nonatomic) LiteAppDynamicModuleCallback *callBack;
@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) NSDictionary *option;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)startMultiContactsSelect:(id)a0 currentVc:(id)a1 resultCallback:(id)a2;
- (void)onMultiSelectContactReturn:(id)a0;
- (void).cxx_destruct;

@end

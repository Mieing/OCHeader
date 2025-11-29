@class NSString, NSDictionary, LiteAppDynamicModuleCallback, UIViewController;

@interface ContactSelectImpl : NSObject <WCPaySelectSingleContactControlLogicDelegate>

@property (retain, nonatomic) LiteAppDynamicModuleCallback *callBack;
@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) NSDictionary *option;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)startContactSelect:(id)a0 currentVc:(id)a1 resultCallback:(id)a2;
- (void)stopSelectSingleContact;
- (void)selectSingleContactLogic:(id)a0 didSelectContact:(id)a1;
- (void)onCancel:(id)a0;
- (BOOL)filter:(id)a0 contact:(id)a1;
- (void).cxx_destruct;

@end

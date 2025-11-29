@class LiteAppDynamicModuleCallback, UIViewController, NSDictionary;

@interface StartNativeUseCaseImpl : MMVoidITransmitKvDataCallback

@property (retain, nonatomic) LiteAppDynamicModuleCallback *callBack;
@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) NSDictionary *option;

- (id)init;
- (void)dealloc;
- (void)startUseCase:(id)a0 currentVc:(id)a1 resultCallback:(id)a2;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end

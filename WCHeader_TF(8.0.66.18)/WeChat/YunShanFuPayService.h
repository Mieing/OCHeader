@class LiteAppDynamicModuleCallback, NSString;

@interface YunShanFuPayService : NSObject <WCPayLogicMgrExt, MMUseCaseCallback, ThirdPayExt>

@property (retain, nonatomic) LiteAppDynamicModuleCallback *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startYunShanFuPay:(id)a0 controller:(id)a1 callback:(id)a2;
- (void)handleApplicationNotification:(id)a0;
- (void)call:(id)a0;
- (void)ThirdPayCallback:(id)a0;
- (void).cxx_destruct;

@end

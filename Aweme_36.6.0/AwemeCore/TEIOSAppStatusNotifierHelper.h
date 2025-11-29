@class NSString;

@interface TEIOSAppStatusNotifierHelper : VERunloopObject <VEAppStatusProtocol>

@property (nonatomic) struct function<void (TEAppStatus)> { struct __value_func<void (TEAppStatus)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } changeBlock;
@property (nonatomic) BOOL asyncNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStatusListener:(struct function<void (TEAppStatus)> { struct __value_func<void (TEAppStatus)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)enterBackground;
- (void)resignActive;
- (void)registerNotifications;
- (id)init;
- (id).cxx_construct;
- (void)enterForeground;
- (void)dealloc;
- (void)memoryWarning;

@end

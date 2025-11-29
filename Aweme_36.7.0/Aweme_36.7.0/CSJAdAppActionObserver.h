@class NSNotification;

@interface CSJAdAppActionObserver : NSObject

@property (retain, nonatomic) NSNotification *openURLNoti;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shareInstance;

- (void)addNoti;
- (void)appStoreWithSKStore:(id)a0;
- (void)appStoreWithOpenURL:(id)a0;
- (void)uploadDuration:(id)a0 type:(id)a1 tag:(id)a2 label:(id)a3 adExtraData:(id)a4;
- (void)appStoreBackWithOpenURL:(id)a0;
- (void)appStoreControllerDidDisappear:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

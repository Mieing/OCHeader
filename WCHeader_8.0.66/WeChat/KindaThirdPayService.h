@class MMVoidITransmitKvDataCallback, NSString;

@interface KindaThirdPayService : NSObject <ThirdPayExt, MMKThirdPayService>

@property (retain, nonatomic) MMVoidITransmitKvDataCallback *resultCallback;
@property (retain, nonatomic) NSString *dcepOrderNo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)startYunShanFuPayImpl:(id)a0 resultCallback:(id)a1;
- (BOOL)isYunShanFuAppInstalled;
- (void)startDcepPayImpl:(id)a0 requestUrl:(id)a1 extra:(id)a2 resultCallback:(id)a3;
- (BOOL)isDcepAppInstalled;
- (BOOL)isSupportApplePay;
- (BOOL)isSupportNFC;
- (void)handleApplicationNotification:(id)a0;
- (void)ThirdPayCallback:(id)a0;
- (void).cxx_destruct;

@end

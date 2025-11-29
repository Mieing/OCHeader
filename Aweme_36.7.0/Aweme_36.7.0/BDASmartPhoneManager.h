@class NSString, CTCallCenter;
@protocol BDASmartPhoneDelegate;

@interface BDASmartPhoneManager : NSObject

@property (retain, nonatomic) CTCallCenter *callCenter;
@property (copy, nonatomic) NSString *avoidDuplicateToken;
@property (weak, nonatomic) id<BDASmartPhoneDelegate> delegate;
@property (nonatomic) double timeoutInterval;

+ (id)sharedInstance;

- (void)tryMakeSmartPhoneCallWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)tryMakePhoneCallWithParams:(id)a0 callType:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)checkPhoneSettingWithCompletion:(id /* block */)a0;
- (void)excuteBlock:(id /* block */)a0 type:(unsigned long long)a1;
- (void)makePhoneCallWithPhoneNumber:(id)a0;
- (void)startCallListenerWithParams:(id)a0 block:(id /* block */)a1;
- (id)combineTokenWithParams:(id)a0;
- (BOOL)checkParams:(id)a0 completion:(id /* block */)a1;
- (void)smartphoneCallFallbackWithMonitorStatus:(unsigned long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)tryMakePhoneCallWithAdParams:(id)a0 completionHandler:(id /* block */)a1 position:(id)a2;
- (void)tryMakeNormalPhoneCallWithParams:(id)a0 completionHandler:(id /* block */)a1 callStatusListenBlock:(id /* block */)a2;
- (void)fetchVirtualNumberWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

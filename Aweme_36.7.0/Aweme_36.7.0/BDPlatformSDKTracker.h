@interface BDPlatformSDKTracker : NSObject

+ (void)event:(id)a0 params:(id)a1;
+ (void)trackerAuthVcShowWithIsFreeAuth:(BOOL)a0 clientKey:(id)a1;
+ (void)trackerPlatformAuthTicketWithLogid:(id)a0 resultType:(unsigned long long)a1 errorCode:(long long)a2 errorDesc:(id)a3;
+ (void)trackerPlatformAuthInfoWithLogid:(id)a0 resultType:(unsigned long long)a1 errorCode:(long long)a2 errorDesc:(id)a3;
+ (void)trackerPlatformAuthCodeWithLogid:(id)a0 resultType:(unsigned long long)a1 errorCode:(long long)a2 errorDesc:(id)a3;
+ (void)trackerPlatformAuthResultWithLogid:(id)a0 clientKey:(id)a1 resultType:(unsigned long long)a2 errorCode:(long long)a3 errorDesc:(id)a4;
+ (void)trackerPlatformCustomAuthInfoWithLogid:(id)a0 resultType:(unsigned long long)a1 errorCode:(long long)a2 errorDesc:(id)a3;
+ (void)trackerCommenWithEvent:(id)a0 logid:(id)a1 resultType:(unsigned long long)a2 errorCode:(long long)a3 errorDesc:(id)a4;
+ (void)trackerCommenWithEvent:(id)a0 logid:(id)a1 clientKey:(id)a2 resultType:(unsigned long long)a3 errorCode:(long long)a4 errorDesc:(id)a5;
+ (id)getAppIdentity;
+ (id)trackerResultByType:(unsigned long long)a0;
+ (void)trackerAuthVcClickWithClickButton:(unsigned long long)a0 clientKey:(id)a1;
+ (void)trackerAuthVcPopupShowWithClientKey:(id)a0 popupScope:(id)a1;
+ (void)trackerAuthVcPopupClickWithPopupScope:(id)a0 isAgree:(BOOL)a1 clientKey:(id)a2;

@end

@interface AWESearchLynxCardErrorMonitor : NSObject

+ (void)reportSearchLynxCardErrorWithError:(id)a0 engine:(id)a1 lynxView:(id)a2;
+ (id)getGeckoIdWithEngine:(id)a0;
+ (BOOL)checkBlackListWithErrorCode:(long long)a0;
+ (id)getExtraParamsWithEngine:(id)a0;
+ (id)getUrlWithEngine:(id)a0;
+ (id)getErrorTypeWithLynxErrorCode:(long long)a0;
+ (void)reportSearchLynxCardErrorWithCategory:(id)a0 extra:(id)a1 lynxView:(id)a2;
+ (id)getErrorTypeWithSearchLynxCardErrorCode:(unsigned long long)a0;
+ (void)reportElementErrorWithElement:(id)a0 lynxEngine:(id)a1 errorCode:(unsigned long long)a2 message:(id)a3 detailInfo:(id)a4 originError:(id)a5 errorExtra:(id)a6;
+ (void)reportJSBErrorWithJSB:(id)a0 errorCode:(unsigned long long)a1 message:(id)a2 detailInfo:(id)a3 errorExtra:(id)a4;

@end

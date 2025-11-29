@interface AWEDiscoverDPlayletTrackService : NSObject

+ (void)trackNetworkServiceName:(id)a0 response:(id)a1 error:(id)a2 otherParams:(id)a3;
+ (void)trackPlayletModelServiceName:(id)a0 playletModels:(id)a1;
+ (void)trackMixNetworkServiceName:(id)a0 model:(id)a1 error:(id)a2;
+ (void)trackVideoPaymentServiceName:(id)a0 mixID:(id)a1 modelList:(id)a2 error:(id)a3;
+ (void)trackVideoPaymentServiceName:(id)a0 model:(id)a1 awemeID:(id)a2 error:(id)a3;
+ (void)trackAwemeModelServiceName:(id)a0 awemeModels:(id)a1 otherParams:(id)a2;
+ (void)trackEventStayPageWithDuration:(long long)a0 logParams:(id)a1;
+ (void)trackCurrentThreadLogExceptionTypeWithCustomParams:(id)a0;
+ (void)trackErrorPlayletVideo:(id)a0 name:(id)a1 otherParams:(id)a2;

@end

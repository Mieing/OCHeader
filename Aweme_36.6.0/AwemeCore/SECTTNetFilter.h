@interface SECTTNetFilter : NSObject

+ (void)runFilterWithRequest:(id)a0 response:(id)a1 withRespData:(id)a2 respError:(id)a3 filterType:(unsigned long long)a4;
+ (void)modifyReq:(id)a0 withAction:(id)a1 actionResults:(id)a2;
+ (void)modifyReq:(id)a0 withActionResult:(id)a1;
+ (void)modifyReqQuery:(id)a0 withActionResult:(id)a1;
+ (void)modifyReqHeader:(id)a0 withActionResult:(id)a1;
+ (void)setupReqFilter;
+ (void)setupRespFilter;

@end

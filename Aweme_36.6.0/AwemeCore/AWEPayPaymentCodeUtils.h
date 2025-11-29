@interface AWEPayPaymentCodeUtils : NSObject

+ (id)douyinFontSize:(double)a0;
+ (id)getHybridTokenCert:(id)a0 bridgeCommand:(id)a1;
+ (long long)getAmount:(id)a0;
+ (id)douyinFontSize:(double)a0 autoScale:(BOOL)a1;
+ (void)dynamicallyLoadDouyinNumberFont;
+ (id)getCodeToken:(id)a0;
+ (unsigned long long)getCodeTypeWithCodeToken:(id)a0;
+ (BOOL)isPersonalCodeWithCodeType:(unsigned long long)a0;
+ (id)getAmountShowStr:(id)a0;
+ (void)showAlertTitle:(id)a0 content:(id)a1 confirmTitle:(id)a2 cancelTitle:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (void)openWebPageWithService:(id)a0 url:(id)a1 closeCallBack:(id /* block */)a2;
+ (id)getCodeTimeWithCodeUrl:(id)a0;
+ (unsigned long long)getCodeTypeWithCodeUrl:(id)a0;
+ (BOOL)isDownloadCode:(id)a0;
+ (BOOL)isPersonalCodeWithCodeToken:(id)a0;
+ (id)extractFieldValueWithURL:(id)a0 field:(id)a1;
+ (id)getSupportAidsWithCodeType:(unsigned long long)a0;

@end

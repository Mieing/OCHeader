@interface IESECGoodsDetailVerifyHelper : NSObject

+ (id)configWithType:(unsigned long long)a0;
+ (void)verifySchema:(id)a0 type:(unsigned long long)a1 additions:(id)a2 callBackDelegate:(id)a3 success:(id /* block */)a4 error:(id /* block */)a5;

@end

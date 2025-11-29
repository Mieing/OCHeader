@interface IESAccountRightsHelper : NSObject

+ (void)resolveUserVerifyDataWithModel:(id)a0 resolveHandler:(id /* block */)a1;
+ (long long)verifyGeneralType:(id)a0;
+ (long long)verifyTypeWithInfo:(id)a0;
+ (BOOL)isUserVerified:(id)a0;
+ (void)resolveUserVerifyDataWithType:(long long)a0 needIconBg:(BOOL)a1 resolveHandler:(id /* block */)a2;

@end

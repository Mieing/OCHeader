@interface AWEECBindTencentAccountUtil : NSObject

+ (BOOL)isQQInstalled;
+ (void)bindWechatAccountWithMiniId:(id)a0 miniPath:(id)a1 miniProgramType:(id)a2 completion:(id /* block */)a3;
+ (void)bindQQAccountWithMiniId:(id)a0 miniPath:(id)a1 miniProgramType:(id)a2 completion:(id /* block */)a3;
+ (unsigned long long)getMiniProgramType;
+ (unsigned long long)getWXMiniProgramType;
+ (BOOL)isWechatInstalled;
+ (void)bindTencentAccountWithPlatform:(id)a0 miniId:(id)a1 miniPath:(id)a2 miniProgramType:(id)a3 completion:(id /* block */)a4;

@end

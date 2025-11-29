@interface AWEGCPQQPlatformUtil : NSObject

+ (BOOL)isQQInstalled;
+ (unsigned long long)getMiniProgramType;
+ (void)openQQMiniProgramWithMiniProgramID:(id)a0 miniProgramPath:(id)a1 completion:(id /* block */)a2;

@end

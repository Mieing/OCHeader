@interface IESECTabKitGeckoUtils : NSObject

+ (id)forestKitInstance:(BOOL)a0;
+ (BOOL)supportSSREnv;
+ (BOOL)checkGeckoFileExist:(id)a0 useBDXForest:(BOOL)a1;
+ (void)fetchGeckoResourceAsync:(id)a0 useBDXForest:(BOOL)a1 completion:(id /* block */)a2;

@end

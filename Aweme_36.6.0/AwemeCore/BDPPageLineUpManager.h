@interface BDPPageLineUpManager : NSObject

+ (BOOL)shouldLineUpWithPagePath:(id)a0 uniqueID:(id)a1 isColdBoot:(BOOL)a2;
+ (void)checkLineUpWithPagePath:(id)a0 uniqueID:(id)a1 isColdBoot:(BOOL)a2 completion:(id /* block */)a3;
+ (id)getLineUpConfigWithUniqueID:(id)a0 path:(id)a1;
+ (long long)getLineUpReportRatioWithUniqueID:(id)a0;

@end

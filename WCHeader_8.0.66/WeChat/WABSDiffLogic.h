@interface WABSDiffLogic : MMObject

+ (BOOL)shouldTryDownloadPatchPkg;
+ (BOOL)shouldTryPatchPublicPkg;
+ (id)mergePatchData:(id)a0 withOldData:(id)a1;

@end

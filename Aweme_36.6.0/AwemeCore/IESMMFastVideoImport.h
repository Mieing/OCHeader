@interface IESMMFastVideoImport : NSObject

+ (BOOL)isFastVideoImportUsable:(id)a0 error:(id *)a1;
+ (BOOL)isFastVideoImportUsable:(id)a0 error:(id *)a1 fromMultiClip:(BOOL)a2;
+ (id)fastImportRequirementDic:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isMultiFastImportDeviceSupport;
+ (BOOL)isFastVideoImportUsable:(id)a0;
+ (BOOL)isFastVideoImportUsableWithError:(id)a0 error:(id *)a1;
+ (BOOL)isMultiFastImportUsable:(id)a0 error:(id *)a1;
+ (BOOL)isSupportFastImport:(id)a0 mediaType:(long long)a1;

@end

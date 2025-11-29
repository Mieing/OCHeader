@interface HMDPathComplianceTool : NSObject

+ (id)complianceReleativePath:(id)a0 prefixPath:(id)a1;
+ (id)compareAbsolutePath:(id)a0 compliancePaths:(id)a1 isMatch:(BOOL *)a2;
+ (id)complianceReleativePath:(id)a0 compliancePaths:(id)a1;
+ (id)compareReleativePath:(id)a0 compliancePaths:(id)a1 isMatch:(BOOL *)a2;

@end

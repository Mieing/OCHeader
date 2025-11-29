@interface ACCProductAnchorConsistencyUtils : NSObject

+ (id)lvOpenPlatformKey;
+ (id)retouchOpenPlatformKey;
+ (id)dreaminaOpenPlatformKey;
+ (BOOL)checkDreaminaConsistencyWithUploadInfo:(id)a0;
+ (BOOL)isShareFromDreamina:(id)a0;
+ (BOOL)checkRetouchConsistencyWithUploadInfo:(id)a0;
+ (BOOL)isShareFromRetouch:(id)a0;
+ (BOOL)checkLVConsistencyWithUploadInfo:(id)a0;
+ (BOOL)isShareFromLV:(id)a0;

@end

@interface BDECPigeonFileManager : NSObject

+ (BOOL)removeIMFileWithAppID:(id)a0 userID:(long long)a1 businessID:(id)a2 pathUserSuffix:(id)a3;
+ (id)kvRelativePathWithAppID:(id)a0 userID:(long long)a1 businessID:(id)a2 pathUserSuffix:(id)a3;
+ (id)sdkWorkplacePath;
+ (id)bizPathWithAppID:(id)a0 userID:(long long)a1 businessID:(id)a2 pathUserSuffix:(id)a3;
+ (BOOL)removeFileWithPath:(id)a0;
+ (void)createDirectoryIfNeeded:(id)a0;

@end

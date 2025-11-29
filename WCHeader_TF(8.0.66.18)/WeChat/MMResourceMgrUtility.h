@interface MMResourceMgrUtility : NSObject

+ (id)getResourceRootDir;
+ (id)getResourceCdnDownloadDir;
+ (id)getResourceCdnDownloadSuccessDir;
+ (id)getResourceDir:(long long)a0;
+ (id)getResourceDirDependentOnClientVersion:(long long)a0;
+ (id)getResourcePath:(long long)a0;
+ (id)getResourcePath:(long long)a0 WithSubResType:(unsigned int)a1;
+ (id)getTestResourcePath:(long long)a0 WithSubResType:(unsigned int)a1 WithEID:(unsigned int)a2;
+ (id)getResourceInfoDBPath;
+ (id)getResourceCheckResponseDataPath;
+ (id)getResourceDirectDownloadDir;
+ (id)getUrlWithoutParam:(id)a0;
+ (id)getMd5FromStr:(id)a0 deleteUrlScheme:(BOOL)a1;
+ (int)crc32WithData:(id)a0;
+ (id)appendRandomParamToUrlStr:(id)a0;

@end

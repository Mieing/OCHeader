@class NSString, NSArray;

@interface WebvViewWebComPublicLibInfo : MMObject

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *iframeUrlPattern;
@property (retain, nonatomic) NSArray *arrIFrameMatrixFormat;
@property (copy, nonatomic) NSString *wxTagJS;
@property (copy, nonatomic) NSString *webcomptJS;
@property (copy, nonatomic) NSString *webSkeletonHtmlString;
@property (copy, nonatomic) NSString *webPrefetchJS;
@property (nonatomic) unsigned int libType;

+ (id)newSessionPublicLibInfo;
+ (id)currentDebugPkgInfo;
+ (id)currentMMResInfo;
+ (id)currentBundlePublicInfoWithMMResVersion:(unsigned long long)a0;
+ (id)publicInfoFromPkgFilePath:(id)a0 minVersion:(long long)a1;
+ (id)dataWithFileName:(id)a0 unpackPkg:(void *)a1;

- (void).cxx_destruct;

@end

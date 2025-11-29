@class NSString, WAPackageUnpackLib;

@interface CacheFileInfo : NSObject

@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int bDebugMode;
@property (copy, nonatomic) NSString *subPath;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *packageFilePath;
@property (retain, nonatomic) WAPackageUnpackLib *pkgLib;

- (void).cxx_destruct;

@end

@class NSString, WAPackageUnpackLib;

@interface MBCacheFileInfo : NSObject

@property (copy, nonatomic) NSString *bizName;
@property (copy, nonatomic) NSString *subPath;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *packageFilePath;
@property (retain, nonatomic) WAPackageUnpackLib *pkgLib;

- (void).cxx_destruct;

@end

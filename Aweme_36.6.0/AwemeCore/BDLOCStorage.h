@class NSString, BDLOCMetaData;

@interface BDLOCStorage : NSObject

@property (copy, nonatomic) NSString *baseFolderPath;
@property (copy, nonatomic) NSString *pkgPath;
@property (copy, nonatomic) NSString *bundlePath;
@property (retain, nonatomic) BDLOCMetaData *metaData;

+ (id)storageWithMetaData:(id)a0;

- (id)pkgInfoPlistPath;
- (void)createPkgInfoPlistIfNeed;
- (void)removeOldPkgsWithMAXCount:(unsigned long long)a0;
- (void).cxx_destruct;

@end

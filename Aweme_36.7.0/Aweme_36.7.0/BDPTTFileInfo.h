@class NSString;

@interface BDPTTFileInfo : NSObject {
    NSString *_pkgName;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *versionMark;
@property (nonatomic) BOOL isInPkg;
@property (copy, nonatomic) NSString *pkgPath;
@property (copy, nonatomic) NSString *path;

- (void)updatePkgPath:(id)a0;
- (void).cxx_destruct;

@end

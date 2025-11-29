@class NSString;

@interface MBBootsLocalPackageChecker : NSObject

@property (retain, nonatomic) NSString *bizName;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *originalName;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *mbBundleFilePath;
@property (retain, nonatomic) NSString *mbHardcodeWxaPkgFilePath;

- (id)initWithBizName:(id)a0 hardCodeFileName:(id)a1 md5:(id)a2 version:(id)a3 suffix:(id)a4;
- (id)process;
- (id)getWxaPkgFilePath;
- (void)makeWxaPkgDir:(id)a0;
- (BOOL)copyHardcodePkg;
- (id)getBrotiData:(id)a0;
- (void).cxx_destruct;

@end

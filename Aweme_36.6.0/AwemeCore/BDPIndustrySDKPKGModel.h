@class NSString;

@interface BDPIndustrySDKPKGModel : NSObject

@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *pkgPath;

- (BOOL)pkgFileExists;
- (void).cxx_destruct;

@end

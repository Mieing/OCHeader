@class NSString;

@interface BDLOCPkgInfo : NSObject

@property (copy, nonatomic) NSString *pkgMD5;
@property (nonatomic) double pkgTimestamp;

- (void).cxx_destruct;

@end

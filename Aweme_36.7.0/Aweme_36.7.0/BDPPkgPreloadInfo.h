@class NSString;

@interface BDPPkgPreloadInfo : NSObject

@property (nonatomic) long long pkgCount;
@property (nonatomic) BOOL isUpgrade;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *appId;

- (void).cxx_destruct;

@end

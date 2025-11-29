@class NSString;

@interface WAPackageDownloadUrlPrefetchResultInfo : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL isPatch;
@property (nonatomic) BOOL isZstd;

- (void).cxx_destruct;

@end

@class NSURL, NSString;

@interface WAPackageDownloadParams : NSObject

@property (retain, nonatomic) NSURL *downloadUrl;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long downloadScene;
@property (nonatomic) BOOL needGzip;
@property (nonatomic) BOOL enableDownloadResumption;

- (id)init;
- (void).cxx_destruct;

@end

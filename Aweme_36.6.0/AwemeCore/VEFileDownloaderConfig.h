@class NSString, NSDictionary, NSURL, VEExternalCache;

@interface VEFileDownloaderConfig : NSObject

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSURL *cacheDir;
@property (copy, nonatomic) NSString *urlKey;
@property (copy, nonatomic) NSDictionary *headerParams;
@property (retain, nonatomic) VEExternalCache *externalCache;
@property (copy, nonatomic) id /* block */ VEDownloaderInfoCallback;

- (void).cxx_destruct;

@end

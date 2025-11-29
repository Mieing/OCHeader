@class NSString;

@interface AWEMediaDownloaderSettings : NSObject

@property (class, readonly, nonatomic) unsigned long long downloadUnreviewedPolicy;
@property (class, readonly, nonatomic) BOOL selfSeeingShouldForbidWaterMarkWhenDownload;
@property (class, readonly, nonatomic) NSString *downloadForbiddenToast;

+ (id)downloadForbiddenToast;
+ (unsigned long long)downloadUnreviewedPolicy;
+ (BOOL)selfSeeingShouldForbidWaterMarkWhenDownload;

@end

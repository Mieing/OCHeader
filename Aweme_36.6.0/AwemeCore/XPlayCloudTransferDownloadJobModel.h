@class NSString, NSURL;

@interface XPlayCloudTransferDownloadJobModel : NSObject

@property (copy, nonatomic) NSString *downloadUrl;
@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSURL *pathUrl;

- (void).cxx_destruct;

@end

@class NSString, NSDictionary, AWENetworkDownloadRequest;

@interface CAKDownloadFileTaskImpl : NSObject

@property (copy, nonatomic) NSString *URLString;
@property (retain, nonatomic) AWENetworkDownloadRequest *request;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSDictionary *progressExtra;
@property (copy, nonatomic) NSDictionary *resultExtra;
@property (nonatomic) BOOL isCanceled;

- (void).cxx_destruct;
- (void)cancel;

@end

@class NSString, NSDictionary, AWENetworkDownloadRequest;

@interface ACCDownloadFileTaskImpl : NSObject <ACCDownloadFileTask>

@property (copy, nonatomic) NSString *URLString;
@property (retain, nonatomic) AWENetworkDownloadRequest *request;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSDictionary *progressExtra;
@property (copy, nonatomic) NSDictionary *resultExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;

@end

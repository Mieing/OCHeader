@class NSString, NSURLSessionDownloadTask;

@interface IESGurdDefaultNetworkDelegate : NSObject <IESGurdNetworkDelegate>

@property (retain, nonatomic) NSURLSessionDownloadTask *currentDownloadTask;
@property (copy, nonatomic) NSString *currentDownloadIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

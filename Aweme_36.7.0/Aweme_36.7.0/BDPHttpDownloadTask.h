@class BDPNetworkTask, BDPNetworkHTTPResponse, BDPUniqueID;

@interface BDPHttpDownloadTask : NSObject

@property (retain, nonatomic) BDPNetworkTask *ttTask;
@property (retain) BDPNetworkHTTPResponse *ttResponse;
@property unsigned long long countOfBytesReceived;
@property (readonly) long long countOfBytesExpectedToReceive;
@property (readonly) long long statusCode;
@property (retain) BDPUniqueID *uniqueID;

- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (void)cancel;

@end

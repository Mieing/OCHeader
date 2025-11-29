@class NSString, BDPNetworkRequestParam;
@protocol BDPNetworkTaskProtocol;

@interface BDPNetworkTask : NSObject <BDPNetworkTaskProtocol>

@property (retain) BDPNetworkRequestParam *param;
@property (copy) id /* block */ completion;
@property (retain) id<BDPNetworkTaskProtocol> realTask;
@property unsigned long long retryCount;
@property double resumeStartTime;
@property (readonly) double createTime;
@property (readonly) double resumeStartDate;
@property (readonly) double createDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (void)resume;
- (void)finishTask;
- (void)cancel;

@end

@class NSString, XPlayNetworkRequestParam;
@protocol XPlayNetworkTaskProtocol;

@interface XPlayNetworkTask : NSObject <XPlayNetworkTaskProtocol>

@property (retain) XPlayNetworkRequestParam *param;
@property (copy) id /* block */ completion;
@property (retain) id<XPlayNetworkTaskProtocol> realTask;
@property unsigned long long retryCount;
@property double resumeStartTime;
@property (readonly) double createTime;
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

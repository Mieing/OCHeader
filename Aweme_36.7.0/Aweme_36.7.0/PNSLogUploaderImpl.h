@class NSString;

@interface PNSLogUploaderImpl : NSObject <PNSLogUploaderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportALogWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2 reportALogCallback:(id /* block */)a3;
- (void)reportALogWithStartTime:(double)a0 endTime:(double)a1;

@end

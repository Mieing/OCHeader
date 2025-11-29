@class NSString, BDFileSpeedTestClient;

@interface AWEIMSpeedTestUploadVideoStrategy : AWEIMSpeedTestUploadVideoBaseStrategy <BDFileSpeedTestClientDelegate> {
    id /* block */ resultBlock;
}

@property (retain, nonatomic) BDFileSpeedTestClient *speedTestClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)uploadVideo:(id)a0 speed:(int)a1 videoContext:(id)a2 error:(id)a3;
- (long long)speedTestGetNetState:(id)a0;
- (id)customSliceSize;
- (id)customSocketNum;
- (int)customThreshold;
- (id)speedTestConfig;
- (void)createSpeedTestUploadVideoClient;
- (id)videoConfig;
- (void)close;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)stop;
- (id /* block */)resultBlock;
- (void)start;
- (void)setResultBlock:(id /* block */)a0;

@end

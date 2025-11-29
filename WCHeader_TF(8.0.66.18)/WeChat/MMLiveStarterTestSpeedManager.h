@interface MMLiveStarterTestSpeedManager : NSObject {
    struct shared_ptr<MyCallback> { struct MyCallback *__ptr_; struct __shared_weak_count *__cntrl_; } testSpeedCallback;
    struct LiveSpeedTestResult { BOOL ping_rtt_successful; BOOL upload_successful; BOOL download_successful; BOOL only_upload_done; float avg_ping_rtt_; float ping_jitter_; int avg_down_speed_; int max_down_speed_; int min_down_speed_; int avg_up_speed_; int max_up_speed_; int min_up_speed_; int task_id_; } testrResult;
}

@property (copy, nonatomic) id /* block */ testSpeedBlock;
@property (nonatomic) BOOL isComplete;

- (void)testSpeedRequestWithModel:(id)a0 testSpeedBlock:(id /* block */)a1;
- (void)testSpeedComplete:(struct LiveSpeedTestResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; float x4; float x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; } *)a0;
- (void)testSpeedParameterRequestWithSuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)safeCompleteMethod;
- (void)forceStopRequest;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

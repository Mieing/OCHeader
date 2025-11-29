@class BmfBap;

@interface BmfBapManager : NSObject

@property (retain, nonatomic) BmfBap *bapLive;
@property (nonatomic) long long last_code;
@property (nonatomic) long long last_processed_frame_cnt;
@property (nonatomic) long long last_processed_frame_total_cost;

- (int)getLastCode;
- (void)initBAPWithAlgoType:(long long)a0 withArea:(long long)a1;
- (int)processInputBuffer:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1;
- (int)getAverageProcessTimePerFrame;
- (void).cxx_destruct;
- (id)init;

@end

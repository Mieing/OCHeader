@class NSString;

@interface BDPNovelPerformanceStatistics : NSObject

@property (nonatomic) double insert_native_start;
@property (nonatomic) double update_config_native_start;
@property (nonatomic) double update_content_native_start;
@property (nonatomic) double read_data_start;
@property (nonatomic) double loading_data_start;
@property (nonatomic) double loading_data_end;
@property (nonatomic) double read_data_end;
@property (nonatomic) double layout_data_start;
@property (nonatomic) double layout_data_end;
@property (nonatomic) double render_data_start;
@property (nonatomic) double render_data_end;
@property (nonatomic) long long offset_start;
@property (nonatomic) long long offset_end;
@property (readonly, copy, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithType:(id)a0;

@end

@class NSArray, NSString;
@protocol YtRawImgData_OC;

@interface YtDataPack_OC : JSONModel

@property (retain, nonatomic) NSArray<YtRawImgData_OC> *images_data;
@property (retain, nonatomic) NSArray *changepoint_time_list;
@property (nonatomic) long long begin_time;
@property (nonatomic) long long changepoint_time;
@property (nonatomic) float offset_sys;
@property (nonatomic) int config_begin;
@property (nonatomic) int frame_num;
@property (nonatomic) int landmark_num;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (retain, nonatomic) NSString *log;
@property (retain, nonatomic) NSString *version;

- (void).cxx_destruct;

@end

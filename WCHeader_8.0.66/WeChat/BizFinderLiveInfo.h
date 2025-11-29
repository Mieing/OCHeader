@class FlutterStandardTypedData, NSString, WeApp_Data, NSNumber, Finder_Data;

@interface BizFinderLiveInfo : NSObject

@property (copy, nonatomic) NSString *bizusername;
@property (copy, nonatomic) NSString *finder_feed_export_id;
@property (retain, nonatomic) NSNumber *refresh_interval;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *live_scene;
@property (copy, nonatomic) NSString *cover;
@property (retain, nonatomic) NSNumber *use_weapp;
@property (copy, nonatomic) NSString *finder_session_buffer;
@property (retain, nonatomic) FlutterStandardTypedData *data_buffer;
@property (retain, nonatomic) WeApp_Data *weapp_data;
@property (retain, nonatomic) Finder_Data *finder_data;
@property (retain, nonatomic) NSNumber *live_status;
@property (copy, nonatomic) NSString *from_session_id_info;
@property (copy, nonatomic) NSString *nonce_id;
@property (copy, nonatomic) NSString *report_info;

+ (id)makeWithBizusername:(id)a0 finder_feed_export_id:(id)a1 refresh_interval:(id)a2 title:(id)a3 live_scene:(id)a4 cover:(id)a5 use_weapp:(id)a6 finder_session_buffer:(id)a7 data_buffer:(id)a8 weapp_data:(id)a9 finder_data:(id)a10 live_status:(id)a11 from_session_id_info:(id)a12 nonce_id:(id)a13 report_info:(id)a14;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toBizFinderLiveInfo;
- (id)toBizServiceFinderLiveInfo;
- (id)toList;
- (void).cxx_destruct;

@end

@class NSString, NSNumber;

@interface BDXBridgeOpenPoiFeedMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *aweme_id;
@property (retain, nonatomic) NSNumber *initial_time;
@property (retain, nonatomic) NSNumber *video_style;
@property (copy, nonatomic) NSString *poi_info;
@property (retain, nonatomic) id extra_params;
@property (copy, nonatomic) NSString *poi_id;
@property (retain, nonatomic) NSNumber *initial_cursor;
@property (retain, nonatomic) NSNumber *scene_type;
@property (retain, nonatomic) NSNumber *initial_count;
@property (retain, nonatomic) NSNumber *page_count;
@property (retain, nonatomic) id tracker_data;
@property (copy, nonatomic) NSString *aweme_list;
@property (retain, nonatomic) NSNumber *video_count;
@property (copy, nonatomic) NSString *react_id;
@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *poi_feed_track_params_config;
@property (nonatomic) long long disable_like_item;
@property (nonatomic) long long disable_slider_poi_detail;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

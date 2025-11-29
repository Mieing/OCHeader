@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeOpenPoiMediaMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *scene_type;
@property (retain, nonatomic) NSNumber *video_style;
@property (copy, nonatomic) NSString *media_id;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *should_show_page_indicator;
@property (retain, nonatomic) NSNumber *should_show_scroll_guide;
@property (retain, nonatomic) NSNumber *footer_height;
@property (copy, nonatomic) NSDictionary *track_data;
@property (copy, nonatomic) NSDictionary *extra_params;
@property (copy, nonatomic) NSDictionary *page_data;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

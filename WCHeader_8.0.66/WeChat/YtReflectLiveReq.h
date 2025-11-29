@class NSString, YtDataPack_OC, YtImageInfo, NSDictionary;

@interface YtReflectLiveReq : JSONModel

@property (retain, nonatomic) NSString *app_id;
@property (retain, nonatomic) NSString *business_id;
@property (retain, nonatomic) NSString *person_id;
@property (retain, nonatomic) NSString *color_data;
@property (nonatomic) int platform;
@property (retain, nonatomic) YtImageInfo *eye_image;
@property (retain, nonatomic) YtImageInfo *mouth_image;
@property (retain, nonatomic) YtDataPack_OC *reflect_data;
@property (retain, nonatomic) NSString *live_image;
@property (retain, nonatomic) NSString *compare_image;
@property (retain, nonatomic) NSString *session_id;
@property (retain, nonatomic) NSDictionary *select_data;

- (void).cxx_destruct;

@end

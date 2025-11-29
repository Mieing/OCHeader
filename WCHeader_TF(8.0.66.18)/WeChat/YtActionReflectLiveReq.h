@class NSString, YtDataPack_OC, YtImageInfo, NSDictionary, NSMutableArray;

@interface YtActionReflectLiveReq : JSONModel

@property (retain, nonatomic) NSString *app_id;
@property (retain, nonatomic) NSString *business_id;
@property (retain, nonatomic) NSString *person_id;
@property (retain, nonatomic) NSString *color_data;
@property (nonatomic) int platform;
@property (retain, nonatomic) YtDataPack_OC *reflect_data;
@property (retain, nonatomic) YtImageInfo *live_image;
@property (retain, nonatomic) YtImageInfo *compare_image;
@property (retain, nonatomic) YtImageInfo *eye_image;
@property (retain, nonatomic) YtImageInfo *mouth_image;
@property (retain, nonatomic) NSString *session_id;
@property (retain, nonatomic) NSDictionary *select_data;
@property (nonatomic) int mode;
@property (retain, nonatomic) NSString *action_video;
@property (retain, nonatomic) NSString *action_str;
@property (retain, nonatomic) NSString *config;
@property (retain, nonatomic) NSMutableArray *depth;

- (void).cxx_destruct;

@end

@class NSString, YtPersonLive, YtImageInfo;

@interface YtPersonLiveReq : JSONModel

@property (retain, nonatomic) NSString *app_id;
@property (retain, nonatomic) NSString *business_name;
@property (retain, nonatomic) NSString *person_id;
@property (retain, nonatomic) YtPersonLive *livedata;
@property (nonatomic) int live_type;
@property (retain, nonatomic) NSString *req_type;
@property (retain, nonatomic) NSString *person_type;
@property (retain, nonatomic) NSString *mp_business_buffer;
@property (retain, nonatomic) NSString *request_id;
@property (retain, nonatomic) YtImageInfo *extra_best_image;

- (void).cxx_destruct;

@end

@interface IESECMallShopMomentPerfInfo : NSObject

@property (nonatomic) double t_real_open_time;
@property (nonatomic) double t_tab_init_start;
@property (nonatomic) double t_page_init_start;
@property (nonatomic) double t_page_init_end;
@property (nonatomic) double t_request_start;
@property (nonatomic) double t_request_end;
@property (nonatomic) double t_page_show;
@property (nonatomic) double t_page_cache_show;
@property (nonatomic) long long load_status;
@property (nonatomic) long long error_code;
@property (nonatomic) BOOL flagRenderCache;
@property (nonatomic) BOOL cacheFromFE;

- (id)toDict;

@end

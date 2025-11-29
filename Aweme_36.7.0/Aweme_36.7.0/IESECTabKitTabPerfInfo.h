@class NSDictionary, NSString;

@interface IESECTabKitTabPerfInfo : NSObject

@property (nonatomic) double t_tab_click_time;
@property (nonatomic) double t_tab_init;
@property (nonatomic) double t_tab_container_init_start;
@property (nonatomic) double t_tab_container_init_end;
@property (nonatomic) double t_render_tab_end;
@property (nonatomic) double t_page_show;
@property (nonatomic) double t_tab_request_start;
@property (nonatomic) double t_tab_request_end;
@property (nonatomic) double t_real_open_time;
@property (nonatomic) double t_load_template_finish;
@property (nonatomic) double t_js_runtime_ready;
@property (nonatomic) double t_tab_update_start_time;
@property (nonatomic) double t_tab_update_end_time;
@property (nonatomic) double t_prefetch_net_start_time;
@property (nonatomic) double t_prefetch_net_end_time;
@property (copy, nonatomic) NSDictionary *prefetchTiming;
@property (copy, nonatomic) NSDictionary *prefetchNetDetail;
@property (copy, nonatomic) NSDictionary *prefetchExtraInfo;
@property (copy, nonatomic) NSString *updateDataFrom;
@property (copy, nonatomic) NSString *loadAnnieUrl;
@property (copy, nonatomic) NSString *ssr_err_msg;
@property (nonatomic) long long ssr_err_code;
@property (nonatomic) long long ssr_sub_err_code;
@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) unsigned long long containerType;
@property (nonatomic) unsigned long long tabLoadStatus;
@property (copy, nonatomic) NSDictionary *timingInfo;
@property (copy, nonatomic) NSDictionary *updateTiming;
@property (nonatomic) unsigned long long hybridContainerType;
@property (nonatomic) long long hitAnnieModelCache;
@property (nonatomic) long long hitAnnieWebCache;
@property (nonatomic) BOOL AnnieXForce;

- (void)reportAnnieXLoadStatus:(BOOL)a0 renderType:(unsigned long long)a1;
- (id)syncUpdateMetric;
- (id)nativeMetric;
- (id)toMetric;
- (id)toCategory;
- (id)hybridMetric;
- (void).cxx_destruct;

@end

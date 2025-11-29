@interface IESECTabKitLynxSSRPerfTiming : NSObject

@property (nonatomic) double t_tab_ssr_request_start;
@property (nonatomic) double t_tab_ssr_fetch_anchor_url_res;
@property (nonatomic) double t_tab_ssr_rcv_anchor_url_res;
@property (nonatomic) double t_tab_ssr_rcv_header;
@property (nonatomic) double t_tab_ssr_fetch_hydrate_url_res;
@property (nonatomic) double t_tab_ssr_rcv_hydrate_url_res;
@property (nonatomic) double t_tab_ssr_rcv_ssr_render_data_start;
@property (nonatomic) double t_tab_ssr_rcv_ssr_render_data_end;
@property (nonatomic) double t_tab_ssr_render_start;
@property (nonatomic) double t_tab_ssr_rcv_ssr_biz_data_start;
@property (nonatomic) double t_tab_ssr_rcv_ssr_biz_data_end;
@property (nonatomic) double t_tab_ssr_hydrate_start;

- (id)perfMetrics;

@end

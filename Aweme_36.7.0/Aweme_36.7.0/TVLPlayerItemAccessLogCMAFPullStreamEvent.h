@class NSDate;

@interface TVLPlayerItemAccessLogCMAFPullStreamEvent : TVLPlayerItemAccessLogHTTPPullStreamEvent

@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__cmaf_mpd_dns_analysis_end;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__cmaf_mpd_tcp_connect_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__cmaf_mpd_tcp_first_package_end;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__cmaf_mpd_http_req_finish_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__cmaf_mpd_http_res_finish_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__cmaf_audio_firstseg_connect_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__cmaf_video_firstseg_connect_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__cmaf_mpd_connect_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__audio_dns_analysis_end;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__video_dns_analysis_end;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__audio_tcp_connect_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__audio_http_req_finish_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__audio_tcp_first_packet_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__audio_http_res_finish_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__video_http_req_finish_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__video_http_res_finish_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__video_tcp_connect_time;
@property (retain, nonatomic) NSDate *TVL_LIVE_LOG_FIELD__TS__video_tcp_first_packet_time;
@property (nonatomic) int TVL_LIVE_LOG_FIELD__INT__enable_async;

- (void).cxx_destruct;

@end

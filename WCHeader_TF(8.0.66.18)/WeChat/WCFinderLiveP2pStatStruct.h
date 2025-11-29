@class NSString;

@interface WCFinderLiveP2pStatStruct : NSObject

@property (nonatomic) unsigned long long liveId;
@property (copy, nonatomic) NSString *finderNickname;
@property (nonatomic) unsigned long long p2pBytes;
@property (nonatomic) unsigned long long cdnBytes;
@property (copy, nonatomic) NSString *natType;
@property (nonatomic) unsigned int p2p_upload_switch;
@property (nonatomic) unsigned int p2p_download_switch;
@property (nonatomic) unsigned int candidates;
@property (nonatomic) unsigned int standbys;
@property (nonatomic) unsigned int load;
@property (copy, nonatomic) NSString *isp;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *xs_full_url;
@property (nonatomic) unsigned int xs_4xx_status;
@property (nonatomic) unsigned int total_pieces;
@property (nonatomic) unsigned int verify_pieces;
@property (nonatomic) unsigned int invalid_pieces;
@property (nonatomic) unsigned int tag_missed_invalid_pieces;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *pieceid;
@property (copy, nonatomic) NSString *send;
@property (copy, nonatomic) NSString *recv;
@property (nonatomic) unsigned int abnormal_ts_count;
@property (nonatomic) unsigned int play_ori_by_no_sei;
@property (nonatomic) unsigned int buffer_length;
@property (nonatomic) unsigned int max_cdn_firstframe;
@property (nonatomic) unsigned int max_p2p_firstframe;
@property (nonatomic) unsigned int first_frame_t;
@property (nonatomic) unsigned int active_punch_total;
@property (nonatomic) unsigned int acitve_punch_succ;
@property (nonatomic) unsigned int passive_punch_total;
@property (nonatomic) unsigned int passive_punch_succ;
@property (nonatomic) unsigned int punch_hole;
@property (nonatomic) unsigned int played_bytes;
@property (nonatomic) unsigned int fullstream_bytes;
@property (nonatomic) unsigned int cdn_substream_bytes;
@property (nonatomic) unsigned int fillup_bytes;
@property (nonatomic) unsigned int xntp_bytes;
@property (nonatomic) unsigned int turn_bytes;
@property (nonatomic) unsigned int punch_bytes;
@property (nonatomic) unsigned int tlive_errmsg_early;
@property (nonatomic) unsigned int tlive_errmsg_miss;
@property (nonatomic) unsigned int tlive_errmsg_expire;
@property (nonatomic) unsigned int subscribe_failure_c;
@property (nonatomic) unsigned int subscribe_refused_c;
@property (nonatomic) unsigned int subscribe_request_c;
@property (nonatomic) unsigned int subscribe_success_c;
@property (nonatomic) unsigned int subscribe_timeout_c;
@property (nonatomic) unsigned int toofar_subscribe_c;
@property (nonatomic) unsigned int too_depth_subscribe_c;
@property (nonatomic) unsigned int checkout_subscribe_c;
@property (nonatomic) unsigned int init_sdk_time;
@property (copy, nonatomic) NSString *p2pSdkVersion;

- (id)toReport;
- (void).cxx_destruct;

@end

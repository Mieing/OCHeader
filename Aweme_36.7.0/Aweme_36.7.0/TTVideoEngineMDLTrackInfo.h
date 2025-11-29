@class NSString;

@interface TTVideoEngineMDLTrackInfo : NSObject

@property (nonatomic) int mdl_mem_buffer_len;
@property (nonatomic) long long mdl_disk_buffer_len;
@property (nonatomic) long long mdl_send_offset;
@property (nonatomic) long long mdl_last_read_time;
@property (nonatomic) long long mdl_last_req_offset;
@property (copy) NSString *mdl_last_ip_list;
@property (copy) NSString *mdl_cur_ip;
@property (copy) NSString *mdl_client_info;
@property (nonatomic) int mdl_cdn_type;
@property (nonatomic) int mdl_speed;
@property (nonatomic) int mdl_downloading;
@property (nonatomic) long long mdl_dns_t;
@property (copy, nonatomic) NSString *mdl_n80_host;
@property (nonatomic) long long mdl_mixed_cdn_type;

- (void).cxx_destruct;
- (id)init;
- (void)update:(id)a0;

@end

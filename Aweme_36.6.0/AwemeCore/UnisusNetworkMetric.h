@class NSString;

@interface UnisusNetworkMetric : NSObject

@property (nonatomic) int dns_duration;
@property (nonatomic) int connect_duration;
@property (nonatomic) int ssl_duration;
@property (nonatomic) int send_duration;
@property (nonatomic) int wait_duration;
@property (nonatomic) int receive_duration;
@property (nonatomic) int execute_duration;
@property (nonatomic) BOOL socket_reused;
@property (nonatomic) long long request_start;
@property (nonatomic) long long request_end;
@property (nonatomic) long long domain_lookup_start;
@property (nonatomic) long long domain_lookup_end;
@property (nonatomic) long long connect_start;
@property (nonatomic) long long connect_end;
@property (nonatomic) long long ssl_connection_start;
@property (nonatomic) long long ssl_connection_end;
@property (nonatomic) long long response_start;
@property (nonatomic) long long response_end;
@property (nonatomic) long long send_bytes_count;
@property (nonatomic) long long received_bytes_count;
@property (retain, nonatomic) NSString *estimate_net_type;
@property (retain, nonatomic) NSString *protocol;
@property (retain, nonatomic) NSString *peer_ip;
@property (nonatomic) int port;
@property (nonatomic) int rtt;
@property (nonatomic) int throughput_kbps;
@property (nonatomic) int http_client_type;
@property (nonatomic) int metric_duration;

- (void).cxx_destruct;

@end

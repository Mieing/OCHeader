@interface AWEVideoPlayRecord : NSObject <NSCoding>

@property (nonatomic) long long internet_speed;
@property (nonatomic) double cache_size;
@property (nonatomic) long long video_bitrate;
@property (nonatomic) long long block_cnt;
@property (nonatomic) double block_time;
@property (nonatomic) double play_time;
@property (nonatomic) double tcp_rtt;
@property (nonatomic) double tcp_bandwith;
@property (nonatomic) double http_rtt;
@property (nonatomic) unsigned long long actions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSString;

@interface CSJLiveStreamInfo : CSJBasicModel

@property (nonatomic) long long live_author_follower_count;
@property (copy, nonatomic) NSString *live_author_nickname;
@property (copy, nonatomic) NSString *live_avatar_url;
@property (nonatomic) long long live_avatar_height;
@property (nonatomic) long long live_avatar_width;
@property (copy, nonatomic) NSString *live_cover_image_url;
@property (nonatomic) long long live_cover_height;
@property (nonatomic) long long live_cover_width;
@property (copy, nonatomic) NSString *live_description;
@property (copy, nonatomic) NSString *live_feed_url;
@property (nonatomic) long long live_show_time;
@property (nonatomic) long long live_watch_count;
@property (nonatomic) long long stream_orientation;

- (id)liveAvatar;
- (void).cxx_destruct;
- (BOOL)isValid;

@end

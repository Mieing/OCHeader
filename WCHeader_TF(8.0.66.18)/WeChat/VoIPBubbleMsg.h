@class NSString;

@interface VoIPBubbleMsg : NSObject

@property (retain, nonatomic) NSString *msg;
@property (nonatomic) unsigned int room_type;
@property (nonatomic) BOOL red_dot;
@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned long long roomkey;
@property (nonatomic) unsigned int inviteid;
@property (nonatomic) unsigned int msg_type;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *identity;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned long long inviteid64;
@property (nonatomic) unsigned int business;
@property (nonatomic) int caller_memberid;
@property (nonatomic) int callee_memberid;

- (BOOL)isVideo;
- (id)xmlInRootNode:(id)a0;
- (id)xmlByWrappingVoIPMsg;
- (id)description;
- (void).cxx_destruct;

@end

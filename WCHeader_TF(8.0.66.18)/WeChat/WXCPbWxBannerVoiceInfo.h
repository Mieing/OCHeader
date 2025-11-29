@class NSString, NSMutableArray;

@interface WXCPbWxBannerVoiceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) int roomid;
@property (nonatomic) long long roomkey;
@property (nonatomic) unsigned int routeId;
@property (nonatomic) int voicestatus;
@property (retain, nonatomic) NSString *wxchatroom;
@property (retain, nonatomic) NSMutableArray *members;
@property (retain, nonatomic) NSString *talkcreateuser;
@property (retain, nonatomic) NSMutableArray *notfrienduserlist;
@property (nonatomic) unsigned long long millsecond;

+ (void)initialize;

@end

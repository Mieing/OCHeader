@class NSString, NSMutableArray;

@interface ConfInviteInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *calleeList;
@property (nonatomic) unsigned int roomType;
@property (nonatomic) BOOL muteVideo;
@property (nonatomic) unsigned int netType;
@property (retain, nonatomic) NSString *ownerGroupid;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned long long inviteId;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *subAppid;

+ (void)initialize;

@end

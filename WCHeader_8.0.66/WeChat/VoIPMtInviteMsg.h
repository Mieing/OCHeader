@class NSString, NSData, NSMutableArray;

@interface VoIPMtInviteMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxGroupid;
@property (nonatomic) unsigned long long roomid;
@property (retain, nonatomic) NSString *sdkGroupid;
@property (retain, nonatomic) NSString *fromOpenid;
@property (retain, nonatomic) NSString *toOpenid;
@property (retain, nonatomic) NSData *confInviteItem;
@property (retain, nonatomic) NSMutableArray *displayUserList;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) unsigned long long createtime;

+ (void)initialize;

@end

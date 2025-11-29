@class VoIPMtUserInfo, BaseRequest, NSString, NSMutableArray;

@interface VoIPMtGetSDKModeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wxGroupid;
@property (retain, nonatomic) NSString *sdkGroupid;
@property (retain, nonatomic) VoIPMtUserInfo *fromUser;
@property (retain, nonatomic) NSMutableArray *userList;

+ (void)initialize;

@end

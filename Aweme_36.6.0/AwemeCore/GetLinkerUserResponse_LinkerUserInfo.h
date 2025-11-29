@class NSString;

@interface GetLinkerUserResponse_LinkerUserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickName;

+ (id)descriptor;

@end

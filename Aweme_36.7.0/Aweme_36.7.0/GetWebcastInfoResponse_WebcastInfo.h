@class NSString;

@interface GetWebcastInfoResponse_WebcastInfo : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *anchorOpenId;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickName;

+ (id)descriptor;

@end

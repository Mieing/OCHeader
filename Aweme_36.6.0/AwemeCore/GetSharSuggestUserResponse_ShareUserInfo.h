@class NSString, HTSLiveUser;

@interface GetSharSuggestUserResponse_ShareUserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) long long watchNumber;
@property (nonatomic) BOOL send;

+ (id)descriptor;

@end

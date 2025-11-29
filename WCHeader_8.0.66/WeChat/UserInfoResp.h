@class NSString, UserInteractiveInfo, UserFriendInfo, IamBizBaseResponse;

@interface UserInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseResponse *baseResponse;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (nonatomic) unsigned int sex;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *renderMpappUrl;
@property (nonatomic) BOOL inBlacklist;
@property (retain, nonatomic) UserInteractiveInfo *interactiveInfo;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *provinceCode;
@property (retain, nonatomic) NSString *cityCode;
@property (retain, nonatomic) UserFriendInfo *friendInfo;

+ (void)initialize;

@end

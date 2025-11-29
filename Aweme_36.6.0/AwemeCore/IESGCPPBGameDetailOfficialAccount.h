@class NSString;

@interface IESGCPPBGameDetailOfficialAccount : GPBMessage

@property (nonatomic) int appId;
@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarUri;
@property (copy, nonatomic) NSString *fansNum;
@property (nonatomic) BOOL isFollow;
@property (nonatomic) BOOL hasCert;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *userOpenId;
@property (copy, nonatomic) NSString *verifyName;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *textColor;

+ (id)descriptor;

@end

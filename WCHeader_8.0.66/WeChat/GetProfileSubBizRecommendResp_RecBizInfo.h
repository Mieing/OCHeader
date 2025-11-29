@class NSString;

@interface GetProfileSubBizRecommendResp_RecBizInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *headimgurl;
@property (nonatomic) unsigned int verifyType;
@property (nonatomic) unsigned int bizuin;

+ (void)initialize;

@end

@class NSString;

@interface GetV6StrangerRespInfo : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *encUsername;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) int sex;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (retain, nonatomic) NSString *textStatusExtInfo;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *textStatusId;
@property (nonatomic) BOOL block;
@property (nonatomic) unsigned int snsFlag;
@property (retain, nonatomic) NSString *hashUsername;

+ (void)initialize;

@end

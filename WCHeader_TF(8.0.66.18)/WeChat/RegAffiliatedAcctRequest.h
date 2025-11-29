@class BaseRequest, NSString;

@interface RegAffiliatedAcctRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) unsigned int hasHeadImg;
@property (retain, nonatomic) NSString *headImgFileId;
@property (retain, nonatomic) NSString *headImgAesKey;
@property (retain, nonatomic) NSString *countryRegion;
@property (retain, nonatomic) NSString *regTicket;
@property (retain, nonatomic) NSString *smsticket;
@property (nonatomic) unsigned int regScene;

+ (void)initialize;

@end

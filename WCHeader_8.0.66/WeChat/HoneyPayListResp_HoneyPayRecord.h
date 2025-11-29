@class NSString;

@interface HoneyPayListResp_HoneyPayRecord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userUsername;
@property (nonatomic) unsigned long long creditLine;
@property (nonatomic) unsigned int rcvd;
@property (nonatomic) unsigned long long remainCreditLine;
@property (nonatomic) unsigned long long detailEntrance;
@property (retain, nonatomic) NSString *cardNo;
@property (retain, nonatomic) NSString *cardTypeName;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSString *icon;

+ (void)initialize;

@end

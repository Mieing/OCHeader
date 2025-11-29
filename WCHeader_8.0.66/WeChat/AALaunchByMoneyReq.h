@class BaseRequest, NSString, ActionLocation, NSMutableArray;

@interface AALaunchByMoneyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int totalNum;
@property (nonatomic) unsigned long long perAmount;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *payerList;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *groupid;
@property (retain, nonatomic) ActionLocation *actionLocation;
@property (nonatomic) unsigned long long operationTimestamp;
@property (retain, nonatomic) NSString *picCdnUrl;
@property (retain, nonatomic) NSString *picCdnThumbUrl;
@property (retain, nonatomic) NSString *pfOrderNo;
@property (retain, nonatomic) NSString *picCdnMd5;
@property (nonatomic) BOOL fromGroupSolitaire;
@property (retain, nonatomic) NSMutableArray *payerSolitaireInfoList;

+ (void)initialize;

@end

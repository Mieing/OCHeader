@class NSString, NoticeItem, AAAlertItem, NSMutableArray, BaseResponse;

@interface AAQueryDetailRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *launcherUsername;
@property (nonatomic) unsigned long long planAmount;
@property (nonatomic) unsigned int planNum;
@property (nonatomic) unsigned long long paidAmount;
@property (nonatomic) unsigned int paidNum;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int overtimeDays;
@property (nonatomic) unsigned int isLauncher;
@property (nonatomic) unsigned int role;
@property (nonatomic) unsigned int roleState;
@property (nonatomic) unsigned long long roleTotalAmount;
@property (nonatomic) unsigned long long roleFinishAmount;
@property (nonatomic) unsigned long long roleRefundAmount;
@property (nonatomic) unsigned int rolePairCnt;
@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) NSMutableArray *payerList;
@property (retain, nonatomic) NSString *changeWording;
@property (nonatomic) unsigned int jumpChange;
@property (nonatomic) unsigned long long activityAmount;
@property (retain, nonatomic) NSString *picCdnUrl;
@property (retain, nonatomic) NSString *picCdnThumbUrl;
@property (retain, nonatomic) AAAlertItem *alertItem;
@property (retain, nonatomic) NSString *launcherRealName;
@property (retain, nonatomic) NSMutableArray *uprightCornerList;
@property (retain, nonatomic) NoticeItem *noticeItem;
@property (retain, nonatomic) NSString *detailSign;
@property (retain, nonatomic) NSString *amountInfoWording;
@property (retain, nonatomic) NSString *amountInfoRouteInfo;

+ (void)initialize;

@end

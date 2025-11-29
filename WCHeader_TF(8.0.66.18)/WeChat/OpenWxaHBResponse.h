@class NSString, RealNameInfo, NSMutableArray, BaseResponse;

@interface OpenWxaHBResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int wxahbStatus;
@property (nonatomic) int hbStatus;
@property (nonatomic) int receiveStatus;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int rcvdNum;
@property (nonatomic) unsigned long long rcvdAmount;
@property (nonatomic) unsigned int totalNum;
@property (nonatomic) unsigned long long totalAmount;
@property (nonatomic) int hbType;
@property (retain, nonatomic) NSMutableArray *rcvdUserList;
@property (retain, nonatomic) NSString *wishing;
@property (retain, nonatomic) NSString *sendUsername;
@property (retain, nonatomic) NSString *sendNickname;
@property (retain, nonatomic) NSString *sendHeadimg;
@property (nonatomic) int isSender;
@property (retain, nonatomic) NSString *headTitle;
@property (nonatomic) int isContinue;
@property (retain, nonatomic) NSString *amountTitle;
@property (retain, nonatomic) RealNameInfo *realNameInfo;
@property (retain, nonatomic) NSString *errorwording;

+ (void)initialize;

@end

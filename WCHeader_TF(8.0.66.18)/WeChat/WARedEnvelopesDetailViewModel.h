@class NSString, NSMutableArray, RealNameInfo;

@interface WARedEnvelopesDetailViewModel : NSObject

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
@property (retain, nonatomic) NSString *amountTitle;
@property (retain, nonatomic) RealNameInfo *realNameInfo;
@property (retain, nonatomic) NSString *errorwording;

- (id)initWithOpenResponse:(id)a0;
- (id)initWithDetailResponse:(id)a0;
- (void).cxx_destruct;

@end

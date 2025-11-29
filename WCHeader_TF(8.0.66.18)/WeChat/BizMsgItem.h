@class NSString, NSMutableArray, DigestInfo;

@interface BizMsgItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizclientmsgid;
@property (nonatomic) unsigned int weight;
@property (nonatomic) unsigned int picType;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int time;
@property (nonatomic) unsigned int digestExposure;
@property (nonatomic) unsigned int digestExposureCnt;
@property (nonatomic) unsigned int digestExposurePeriod;
@property (nonatomic) unsigned int digestExposurePos;
@property (nonatomic) unsigned int exposureCnt;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSMutableArray *urls;
@property (nonatomic) unsigned long long clientmsgid;
@property (retain, nonatomic) NSString *buffer;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSMutableArray *recInfo;
@property (retain, nonatomic) DigestInfo *digestInfo;
@property (nonatomic) unsigned int opFlag;
@property (nonatomic) unsigned int groupFlag;
@property (nonatomic) unsigned int exposureAreaRatio;
@property (nonatomic) unsigned int lowergroupFlag;
@property (retain, nonatomic) NSString *recommendReason;

+ (void)initialize;

@end

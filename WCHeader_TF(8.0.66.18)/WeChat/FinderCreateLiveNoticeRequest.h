@class BaseRequest, NSString, FinderLiveNoticeInfo, FinderBaseRequest, NSMutableArray, FinderLivePaymentSetting;

@interface FinderCreateLiveNoticeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) NSMutableArray *attachInfo;
@property (retain, nonatomic) FinderLivePaymentSetting *paymentSetting;
@property (retain, nonatomic) NSString *delReason;
@property (nonatomic) unsigned int noticeAggregateType;
@property (nonatomic) unsigned int sourceScene;
@property (retain, nonatomic) NSString *modifyReason;
@property (nonatomic) unsigned long long modifyFieldFlag;

+ (void)initialize;

@end

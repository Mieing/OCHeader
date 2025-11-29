@class BaseRequest, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderLvChannelFlowReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int pullType;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned long long tabTipsObjectId;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;
@property (nonatomic) unsigned int tabType;
@property (retain, nonatomic) NSData *clientPrefetchData;
@property (nonatomic) unsigned int uiStype;

+ (void)initialize;

@end

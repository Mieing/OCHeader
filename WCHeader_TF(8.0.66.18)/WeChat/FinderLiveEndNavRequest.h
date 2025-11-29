@class FinderLiveReportBaseInfo, BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus, FinderLiveClientStatus;

@interface FinderLiveEndNavRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) FinderLiveClientStatus *liveStatus;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end

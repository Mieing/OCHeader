@class BaseRequest, FinderBaseRequest;

@interface FinderPromotionReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baserequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned long long dramaObjectId;
@property (nonatomic) unsigned long long nativeDramaId;
@property (nonatomic) unsigned long long adsObjectId;

+ (void)initialize;

@end

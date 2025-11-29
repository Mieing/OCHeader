@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetCouponListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end

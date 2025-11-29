@class BaseRequest, FinderLbsStreamLocation, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderGetLbsStreamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned int prefetchType;
@property (retain, nonatomic) FinderLbsStreamLocation *location;
@property (retain, nonatomic) FinderLbsStreamLocation *realtimeLocation;
@property (nonatomic) unsigned long long tabTipsObjectId;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;

+ (void)initialize;

@end

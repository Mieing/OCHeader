@class BaseRequest, FinderLiveClientStatus, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderLiveStreamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int displayTabType;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) FinderLiveClientStatus *liveStatus;

+ (void)initialize;

@end

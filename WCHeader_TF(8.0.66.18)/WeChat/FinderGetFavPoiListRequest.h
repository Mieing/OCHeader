@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetFavPoiListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;

+ (void)initialize;

@end

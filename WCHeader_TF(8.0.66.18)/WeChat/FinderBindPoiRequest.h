@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderBindPoiRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *poiList;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;

+ (void)initialize;

@end

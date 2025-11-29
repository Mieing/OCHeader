@class BaseRequest, NSString;

@interface GetWxOlPageInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *poiId;
@property (nonatomic) float userLocationLongitude;
@property (nonatomic) float userLocationLatitude;
@property (nonatomic) float sendLocationLongitude;
@property (nonatomic) float sendLocationLatitude;

+ (void)initialize;

@end

@class BaseRequest, NSString;

@interface GetPoiInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *poiId;

+ (void)initialize;

@end

@class NSString, BaseResponse;

@interface CreatePoiResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *poiId;

+ (void)initialize;

@end

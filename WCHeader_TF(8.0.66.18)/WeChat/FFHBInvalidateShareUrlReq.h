@class BaseRequest, NSString;

@interface FFHBInvalidateShareUrlReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *shareUrl;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (void)initialize;

@end

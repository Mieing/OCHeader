@class BaseRequest, NSString;

@interface FFHBClearReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *sendId;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (void)initialize;

@end

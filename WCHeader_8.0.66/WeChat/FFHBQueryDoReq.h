@class BaseRequest;

@interface FFHBQueryDoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned long long timestamp;

+ (void)initialize;

@end

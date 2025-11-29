@class BaseRequest;

@interface FFHBRequestReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int totalNum;
@property (nonatomic) unsigned int totalAmount;
@property (nonatomic) int hbType;
@property (nonatomic) unsigned int perValue;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (void)initialize;

@end

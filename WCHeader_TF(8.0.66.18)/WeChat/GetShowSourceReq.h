@class BaseRequest, NSString;

@interface GetShowSourceReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lastpagedata;
@property (nonatomic) unsigned int sourcelistType;

+ (void)initialize;

@end

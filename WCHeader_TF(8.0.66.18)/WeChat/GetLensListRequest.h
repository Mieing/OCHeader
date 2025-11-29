@class BaseRequest, NSData;

@interface GetLensListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reqType;
@property (retain, nonatomic) NSData *pageBuff;
@property (retain, nonatomic) NSData *ctx;

+ (void)initialize;

@end

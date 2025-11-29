@class BaseRequest, NSData;

@interface GetUserAuthListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *nextPageData;
@property (nonatomic) BOOL newPage;

+ (void)initialize;

@end

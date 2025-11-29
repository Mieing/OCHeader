@class BaseRequest, NSString, NSData;

@interface SearchUserAuthReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSData *nextPageData;
@property (nonatomic) BOOL newPage;

+ (void)initialize;

@end

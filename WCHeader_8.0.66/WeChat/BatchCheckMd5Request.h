@class BaseRequest, NSMutableArray;

@interface BatchCheckMd5Request : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *checkElementList;

+ (void)initialize;

@end

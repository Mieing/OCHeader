@class NSString, NSMutableArray;

@interface NewLifeBizJsApiResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSString *respJson;
@property (retain, nonatomic) NSMutableArray *respHeader;

+ (void)initialize;

@end

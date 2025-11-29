@class NSString, NSMutableArray;

@interface JsApiResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSString *respJson;
@property (retain, nonatomic) NSMutableArray *header;

+ (void)initialize;

@end

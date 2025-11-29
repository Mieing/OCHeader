@class NSString, NSMutableArray;

@interface JsApiResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSString *respJson;
@property (retain, nonatomic) NSMutableArray *header;

+ (void)initialize;

- (void)setHeader:(id)a0;
- (id)header;
- (void)setRespJson:(id)a0;
- (id)respJson;
- (void)setErrorMsg:(id)a0;
- (id)errorMsg;
- (void)setRet:(int)a0;
- (int)ret;

@end

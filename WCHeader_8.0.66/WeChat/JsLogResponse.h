@class NSMutableArray, BaseResponse;

@interface JsLogResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *invalidLogList;

+ (void)initialize;

@end

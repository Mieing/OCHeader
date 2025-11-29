@class NSMutableArray, KVLogHead;

@interface JsLogRequest : WXPBGeneratedMessage

@property (retain, nonatomic) KVLogHead *logHead;
@property (retain, nonatomic) NSMutableArray *logList;

+ (void)initialize;

@end

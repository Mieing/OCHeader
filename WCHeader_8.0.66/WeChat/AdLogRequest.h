@class NSMutableArray, KVLogHead;

@interface AdLogRequest : WXPBGeneratedMessage

@property (retain, nonatomic) KVLogHead *logHead;
@property (retain, nonatomic) NSMutableArray *logList;

+ (void)initialize;

- (void)setLogList:(id)a0;
- (id)logList;
- (void)setLogHead:(id)a0;
- (id)logHead;

@end

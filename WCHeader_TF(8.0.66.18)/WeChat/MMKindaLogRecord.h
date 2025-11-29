@class NSString, NSDictionary;

@interface MMKindaLogRecord : NSObject

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) long long sequenceId;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) NSDictionary *extInfo;

+ (id)KindaLogRecordWithType:(int)a0 sessionId:(id)a1 sequenceId:(long long)a2 url:(id)a3 action:(int)a4 extInfo:(id)a5;

- (id)initWithType:(int)a0 sessionId:(id)a1 sequenceId:(long long)a2 url:(id)a3 action:(int)a4 extInfo:(id)a5;
- (id)description;
- (void).cxx_destruct;

@end

@class NSString;

@interface TempoExpressionParser : NSObject

@property (copy, nonatomic) NSString *statement;
@property (nonatomic) long long cursor;
@property (nonatomic) long long preTokenCursor;

+ (id)parse:(id)a0 error:(id *)a1;

- (id)produceToken:(BOOL)a0 withType:(long long)a1;
- (id)parseMustacheToken:(id *)a0;
- (int)nextChar;
- (id)initWithStatement:(id)a0;
- (void).cxx_destruct;
- (id)parse:(id *)a0;

@end

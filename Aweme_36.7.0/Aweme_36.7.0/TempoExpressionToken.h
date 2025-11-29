@class NSString;

@interface TempoExpressionToken : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *value;

+ (id)tokenWithType:(long long)a0 value:(id)a1;

- (void).cxx_destruct;

@end

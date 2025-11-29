@class NSString;

@interface AWEIMPushConditionResult : NSObject

@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) NSString *message;

+ (id)resultWithCode:(long long)a0;
+ (id)resultWithCode:(long long)a0 message:(id)a1;

- (id)initWithCode:(long long)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end

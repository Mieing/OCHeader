@interface RTVStateEvent : NSObject

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) long long eventCode;

+ (id)eventWithType:(long long)a0 code:(long long)a1;

- (id)initWithType:(long long)a0 code:(long long)a1;
- (id)description;

@end

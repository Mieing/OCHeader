@class NSDictionary;

@interface APBEvent : NSObject

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSDictionary *params;

+ (id)eventWithCommand:(id)a0;

- (id)initWithEventType:(long long)a0 withParam:(id)a1;
- (void).cxx_destruct;

@end

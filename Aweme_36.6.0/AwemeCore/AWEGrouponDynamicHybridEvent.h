@class NSString, NSDictionary;

@interface AWEGrouponDynamicHybridEvent : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;

+ (id)eventWithEventName:(id)a0 params:(id)a1;

- (id)initWithEventName:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end

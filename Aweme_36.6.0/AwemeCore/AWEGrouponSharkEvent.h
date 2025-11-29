@class NSString, NSDictionary;

@interface AWEGrouponSharkEvent : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *scene;

+ (id)eventWithEventName:(id)a0 scene:(id)a1 params:(id)a2;

- (id)initWithEventName:(id)a0 scene:(id)a1 params:(id)a2;
- (void).cxx_destruct;

@end

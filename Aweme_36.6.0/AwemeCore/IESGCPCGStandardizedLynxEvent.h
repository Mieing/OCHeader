@class NSString, NSDictionary;

@interface IESGCPCGStandardizedLynxEvent : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;

+ (id)eventWithName:(id)a0 params:(id)a1;

- (void).cxx_destruct;

@end

@class NSString, NSDictionary;

@interface BDPComponentEvent : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) long long componentId;

- (void).cxx_destruct;

@end

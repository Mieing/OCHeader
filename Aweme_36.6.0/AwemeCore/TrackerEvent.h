@class NSString, NSDictionary;

@interface TrackerEvent : NSObject

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) unsigned long long platform;

- (id)initWithEvent:(id)a0 params:(id)a1 platform:(unsigned long long)a2;
- (void).cxx_destruct;

@end

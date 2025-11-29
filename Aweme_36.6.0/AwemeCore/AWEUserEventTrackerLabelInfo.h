@class NSString, NSDictionary;

@interface AWEUserEventTrackerLabelInfo : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSDictionary *attributes;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end

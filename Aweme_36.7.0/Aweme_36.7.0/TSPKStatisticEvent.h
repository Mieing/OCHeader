@class NSString, NSDictionary;

@interface TSPKStatisticEvent : TSPKBaseEvent

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSDictionary *metric;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *attributes;

+ (id)initWithService:(id)a0 metric:(id)a1 category:(id)a2 attributes:(id)a3;
+ (id)initWithMethodName:(id)a0 startedTime:(double)a1;

- (void).cxx_destruct;
- (id)tag;

@end

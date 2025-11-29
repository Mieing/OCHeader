@class NSString, NSUUID, NSDictionary;

@interface AFDPreloadSourceEvent : NSObject

@property (nonatomic) long long state;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *identifer;
@property (copy, nonatomic) NSDictionary *context;
@property (nonatomic) BOOL isAsynchronous;

+ (id)occurredWithName:(id)a0;
+ (id)eventWithName:(id)a0;
+ (id)startedWithName:(id)a0;

- (void)occurred;
- (void).cxx_destruct;
- (id)description;
- (void)finished;
- (void)started;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

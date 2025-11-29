@class NSError;

@interface RACEvent : NSObject <NSCopying>

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) id value;

+ (id)completedEvent;
+ (id)eventWithValue:(id)a0;
+ (id)eventWithError:(id)a0;

- (id)initWithEventType:(unsigned long long)a0 object:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

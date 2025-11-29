@class NSString;

@interface AppMonitorDimension : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *constantValue;

- (id)initWithName:(id)a0 constantValue:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

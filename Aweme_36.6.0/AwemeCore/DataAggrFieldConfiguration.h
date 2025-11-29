@class NSString;

@interface DataAggrFieldConfiguration : NSObject

@property (copy, nonatomic) NSString *field;
@property (nonatomic) unsigned long long types;

+ (id)field:(id)a0 withAggrTypes:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)description;

@end

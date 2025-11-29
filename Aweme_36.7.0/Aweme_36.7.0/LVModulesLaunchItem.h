@class NSString;

@interface LVModulesLaunchItem : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) double cost;
@property (copy, nonatomic) NSString *start_time;
@property (copy, nonatomic) NSString *end_time;

- (id)modelToJson;
- (void).cxx_destruct;
- (id)init;

@end

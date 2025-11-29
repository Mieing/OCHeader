@class NSString, NSMutableArray, NSDate;

@interface AWECommerceWorkflowLogItem : NSObject <NSCoding>

@property (retain, nonatomic) NSMutableArray *traceNodes;
@property (retain, nonatomic) NSMutableArray *traceTimestamps;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *name;

- (void)appendTraceKey:(id)a0;
- (void)startTraceWithTraceKey:(id)a0;
- (id)uploadLogDict;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;

@end

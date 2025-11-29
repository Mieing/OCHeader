@class NSDateFormatter;

@interface TencentLBSCoreLog : NSObject

@property (copy, nonatomic) id /* block */ innerCoreLogBlock;
@property (retain, nonatomic) NSDateFormatter *dateFormtter;

+ (id)sharedInstance;

- (id)init;
- (void)printwithTag:(id)a0 withDate:(id)a1 withLog:(id)a2;
- (void).cxx_destruct;

@end

@class NSString, NSDictionary;

@interface IESLiveInteractPerformanceStrategy : NSObject

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long level;
@property (nonatomic) long long strategy;
@property (nonatomic) BOOL on;
@property (retain, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;
- (id)description;

@end

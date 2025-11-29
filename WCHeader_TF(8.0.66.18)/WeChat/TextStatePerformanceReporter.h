@interface TextStatePerformanceReporter : NSObject

@property (nonatomic) unsigned int privateAction;
@property (nonatomic) unsigned int privateSubaction;
@property (nonatomic) unsigned long long privateDuration;

+ (id)reporter;

- (id /* block */)action;
- (id /* block */)subaction;
- (id /* block */)duration;
- (id /* block */)report;

@end

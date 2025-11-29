@class MMWebOptimJSContextTaskConfig;

@interface MMWebOptimJSContextTaskLoaderContext : MMObject

@property (retain, nonatomic) MMWebOptimJSContextTaskConfig *config;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (void).cxx_destruct;

@end

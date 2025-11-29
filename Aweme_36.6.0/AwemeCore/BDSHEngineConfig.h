@class NSDictionary;
@protocol BDSHEngineDelegate;

@interface BDSHEngineConfig : NSObject

@property (weak, nonatomic) id<BDSHEngineDelegate> delegate;
@property (nonatomic) BOOL asyncOptimizeEnabled;
@property (copy, nonatomic) NSDictionary *trackerContext;
@property (copy, nonatomic) id /* block */ videoCreateBlock;

- (void).cxx_destruct;

@end

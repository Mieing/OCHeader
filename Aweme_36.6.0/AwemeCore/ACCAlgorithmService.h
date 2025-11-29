@class NSArray;

@interface ACCAlgorithmService : NSObject

@property (copy, nonatomic) NSArray *bimAlgorithmModelList;

- (BOOL)isBIMModelReady;
- (void)updateBIMModelWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end

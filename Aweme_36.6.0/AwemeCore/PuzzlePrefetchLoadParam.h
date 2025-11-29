@class NSArray;

@interface PuzzlePrefetchLoadParam : NSObject

@property (copy, nonatomic) NSArray *configJsons;
@property (nonatomic) BOOL ignoreCache;
@property (nonatomic) BOOL pbModeEnable;
@property (copy, nonatomic) NSArray *pbConfigModels;
@property (copy, nonatomic) NSArray *latchJsonChannels;
@property (copy, nonatomic) NSArray *latchJsons;
@property (copy, nonatomic) NSArray *latchJsonCosts;

- (void).cxx_destruct;

@end

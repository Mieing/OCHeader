@interface FTSModuleStat : NSObject

@property (nonatomic) unsigned int moduleType;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned int resultCnt;

- (unsigned int)calTime;

@end

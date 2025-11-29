@protocol ACCDiskCleanStrategyProtocol;

@interface ACCDiskCleanFlowContext : NSObject

@property (weak, nonatomic) id<ACCDiskCleanStrategyProtocol> strategy;
@property (nonatomic) long long cleanCount;
@property (nonatomic) long long failCount;
@property (nonatomic) unsigned long long cleanSize;
@property (nonatomic) unsigned long long sizeBefore;

- (void).cxx_destruct;

@end

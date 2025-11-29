@class NSNumber, NSMutableArray;

@interface IESLiveRevenueInteractStreamAverageFPSCalculator : NSObject

@property (nonatomic) unsigned long long currentCount;
@property (retain, nonatomic) NSNumber *currentStreamFPS;
@property (retain, nonatomic) NSNumber *streamAverageFPS;
@property (retain, nonatomic) NSMutableArray *arr;
@property (nonatomic) long long sumFPS;
@property (nonatomic) unsigned long long sampleCount;

- (void)addFPSData:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end

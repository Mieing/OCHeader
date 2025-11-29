@class BDPNovelPerformanceStatistics;

@interface BDPNovelPerformanceHelper : NSObject

@property (nonatomic) unsigned long long performanceType;
@property (retain, nonatomic) BDPNovelPerformanceStatistics *statistics;

- (id)performanceDic;
- (id)getPerformanceStatistics;
- (id)typeStr:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)currentType;

@end

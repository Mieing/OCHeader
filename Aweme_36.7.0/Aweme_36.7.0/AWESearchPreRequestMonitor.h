@class NSMutableArray;

@interface AWESearchPreRequestMonitor : NSObject

@property (retain, nonatomic) NSMutableArray *diffArray;
@property (nonatomic) unsigned long long totalDiffCount;

+ (id)sharedInstance;

- (void)appendParamsDiff:(id)a0 tag:(id)a1 keyword:(id)a2 enterFrom:(id)a3 searchSource:(id)a4 requestMode:(unsigned long long)a5;
- (void).cxx_destruct;

@end

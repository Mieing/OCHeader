@class LLDitoMonitor;

@interface LLDitoChunkMonitor : NSObject

@property (nonatomic) unsigned long long stage;
@property (retain, nonatomic) LLDitoMonitor *monitor;

- (void).cxx_destruct;

@end

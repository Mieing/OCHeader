@class DitoMonitor;

@interface DitoChunkMonitor : NSObject

@property (nonatomic) unsigned long long stage;
@property (retain, nonatomic) DitoMonitor *monitor;

- (void).cxx_destruct;

@end

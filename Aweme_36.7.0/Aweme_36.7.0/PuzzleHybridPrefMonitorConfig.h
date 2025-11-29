@class PuzzleHybridAPMConfig;

@interface PuzzleHybridPrefMonitorConfig : NSObject

@property (retain, nonatomic) PuzzleHybridAPMConfig *apmConfig;

+ (id)defaultConfig;

- (id)initWithIndicator:(unsigned int)a0;
- (void)setupWithIndicator:(unsigned int)a0;
- (void).cxx_destruct;

@end

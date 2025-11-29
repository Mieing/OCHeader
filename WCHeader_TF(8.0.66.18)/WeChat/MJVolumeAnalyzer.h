@class OMCAutoVolumeCalculator;

@interface MJVolumeAnalyzer : NSObject

@property (retain, nonatomic) OMCAutoVolumeCalculator *volumeCalculator;

- (id)init;
- (void)dealloc;
- (void)analyzeWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeImplWithClipSegment:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end

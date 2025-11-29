@interface MJMusicAnalyzer : MJContentAnalyzer

@property long long queryCount;

- (id)init;
- (void)dealloc;
- (void)analyzeWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeWithClassifyHelper:(id)a0 completionHandler:(id /* block */)a1;
- (void)processAnalysisResultWithClassifyHelper:(id)a0 completionHandler:(id /* block */)a1;

@end

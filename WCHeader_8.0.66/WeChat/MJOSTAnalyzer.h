@class MJMovieComposingASRProcessor;

@interface MJOSTAnalyzer : MJContentAnalyzer

@property (retain, nonatomic) MJMovieComposingASRProcessor *asrProcessor;

- (id)init;
- (void)dealloc;
- (void)analyzeWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end

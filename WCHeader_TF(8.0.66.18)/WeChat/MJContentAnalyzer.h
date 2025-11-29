@interface MJContentAnalyzer : NSObject

- (void)analyzeWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleSuccessWithResult:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)handleFailWithCompletionHandler:(id /* block */)a0;

@end

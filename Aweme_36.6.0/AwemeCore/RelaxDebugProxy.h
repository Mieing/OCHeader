@protocol IRelaxDevTool;

@interface RelaxDebugProxy : NSObject {
    id<IRelaxDevTool> _devtool;
}

- (void)onReceivedError:(id)a0;
- (void)attachEngine:(long long)a0;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)destroy;
- (void)dealloc;

@end

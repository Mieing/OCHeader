@protocol DitoLayoutExecutorDataSource;

@interface DitoLayoutExecutor : NSObject

@property (weak, nonatomic) id<DitoLayoutExecutorDataSource> dataSource;

- (id)placeholderLayout;
- (id)nextSubNodeIfNeedLayout:(id)a0 nodeMap:(id)a1 layoutMap:(id)a2;
- (void)nodeDidLayout:(id)a0 layout:(id)a1 nodeMap:(id)a2 layoutMap:(id)a3;
- (void)appendNodeBottomMarign:(id)a0 layout:(id)a1 nodeMap:(id)a2 layoutMap:(id)a3;
- (id)nextSubNodeIfAppendBottomMargin:(id)a0 nodeMap:(id)a1 didBuildNodeMap:(id)a2;
- (void)layoutContainerNode:(id)a0 containerWidth:(double)a1 nodeMap:(id)a2;
- (void).cxx_destruct;

@end

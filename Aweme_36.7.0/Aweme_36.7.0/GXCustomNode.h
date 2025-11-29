@interface GXCustomNode : GXBaseNode

@property (retain, nonatomic) Class viewClazz;

- (void)bindData:(id)a0;
- (void)configureStyleInfo:(id)a0;
- (void)handleExtend:(id)a0 isCalculate:(BOOL)a1;
- (void)configureViewInfo:(id)a0;
- (id)creatView;
- (void)calculateWithData:(id)a0;
- (void).cxx_destruct;
- (void)renderView:(id)a0;

@end

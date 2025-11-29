@interface IESLiveConsumeUserEnterNodeProcessor : IESLiveUserEnterNodeProcessor

- (BOOL)enableUserEnterWithMessage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameWithNode:(id)a0;
- (void)createNodeViewWithNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (BOOL)replaceNodeIfNeed:(id)a0;
- (id)compressLowPriorityNodeWithOldNode:(id)a0 newNode:(id)a1;

@end

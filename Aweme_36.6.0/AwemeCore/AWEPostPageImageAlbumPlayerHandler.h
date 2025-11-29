@interface AWEPostPageImageAlbumPlayerHandler : AWEPostPagePlayerHandler

- (void)bindServices:(id)a0;
- (double)captureFrameIndex;
- (void)captureFrameAtIndex:(double)a0 processed:(BOOL)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 compeletion:(id /* block */)a3;

@end

@interface PAGImageLayer : PAGLayer

+ (id)Make:(struct CGSize { double x0; double x1; })a0 duration:(long long)a1;

- (id)getVideoRanges;
- (void)replaceImage:(id)a0;
- (void)setImage:(id)a0;
- (long long)contentDuration;
- (id)imageBytes;

@end

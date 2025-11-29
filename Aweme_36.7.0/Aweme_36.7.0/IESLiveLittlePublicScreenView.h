@interface IESLiveLittlePublicScreenView : IESLivePublicScreenView

@property (nonatomic) struct CGSize { double width; double height; } updateSize;

- (void)updateWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

@class UIImageView;

@interface _YYTextMagnifierRanged : YYTextMagnifier {
    UIImageView *_contentView;
    UIImageView *_coverView;
}

+ (id)coverImage;

- (struct CGSize { double x0; double x1; })fitSize;
- (void).cxx_destruct;
- (void)setSnapshot:(id)a0;
- (id)init;
- (long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)snapshot;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })snapshotSize;

@end

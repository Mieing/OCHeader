@interface AWEIMGroupAvatarMergeHelper : NSObject

@property (nonatomic) double imageSize;

- (id)initWithImageWidthAndHeight:(double)a0;
- (id)__userAvatarImageWithUID:(id)a0;
- (id)__singleGroupAddIcon;
- (id)mergeFirstImage:(id)a0 secondImage:(id)a1 mergeType:(long long)a2;
- (id)__createCircleImageWithImage:(id)a0;
- (id)createCircularCutoutImageFromImage:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)groupImageWithFirstUID:(id)a0 secondUID:(id)a1 mergeType:(long long)a2;
- (double)borderWidth;
- (double)origin;
- (id)init;

@end

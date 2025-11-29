@class UIColor;

@interface RTVAvatarContext : NSObject

@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL useInnerBorder;

+ (id)contextWithAvatarSize:(struct CGSize { double x0; double x1; })a0 borderWidth:(double)a1 borderColor:(id)a2;

- (void).cxx_destruct;

@end

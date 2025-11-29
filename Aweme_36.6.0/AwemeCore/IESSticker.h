@class NSString, UIImage;

@interface IESSticker : NSObject <NSCopying>

@property (copy, nonatomic) NSString *key;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double rotate;
@property (nonatomic) float opaque;
@property (retain, nonatomic) UIImage *image;

+ (id)stickerWithImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotate:(double)a2 opaque:(float)a3;
+ (id)stickerWithDic:(id)a0 imageHomePath:(id)a1;

- (id)stickerToDicWithImageHomePath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

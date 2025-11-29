@class UIImage;

@interface YYImageFrame : NSObject <NSCopying>

@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long offsetX;
@property (nonatomic) unsigned long long offsetY;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long dispose;
@property (nonatomic) unsigned long long blend;
@property (retain, nonatomic) UIImage *image;

+ (id)frameWithImage:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

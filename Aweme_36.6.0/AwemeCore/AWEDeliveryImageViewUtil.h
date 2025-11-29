@interface AWEDeliveryImageViewUtil : NSObject

+ (void)awed_setDownsampleImageWithURL:(id)a0 placeholderImage:(id)a1 imageView:(id)a2 pigeonBizType:(id)a3 completion:(id /* block */)a4;
+ (void)awed_setDownsampleImageWithURL:(id)a0 pigeonBizType:(id)a1 imageView:(id)a2;
+ (void)awed_setDownsampleImageWithURL:(id)a0 placeholderImage:(id)a1 pigeonBizType:(id)a2 imageView:(id)a3;
+ (void)awed_setImageWithURLString:(id)a0 placeholderImage:(id)a1 pigeonBizType:(id)a2 imageView:(id)a3;
+ (void)awed_setImageWithURLString:(id)a0 placeholderImage:(id)a1 imageView:(id)a2 pigeonBizType:(id)a3 completion:(id /* block */)a4;
+ (void)awed_setImageWithURLString:(id)a0 pigeonBizType:(id)a1 imageView:(id)a2;
+ (void)awed_setImageWithURLString:(id)a0 imageView:(id)a1 pigeonBizType:(id)a2 completion:(id /* block */)a3;

@end

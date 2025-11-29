@interface IESGCPWebImageUtil : NSObject

+ (void)setImageWithImageView:(id)a0 urls:(id)a1;
+ (void)setImageWithImageView:(id)a0 url:(id)a1 placeholderImage:(id)a2 completion:(id /* block */)a3;
+ (void)setImageWithImageView:(id)a0 url:(id)a1;
+ (void)setImageWithImageView:(id)a0 url:(id)a1 placeholderImage:(id)a2 options:(long long)a3 completion:(id /* block */)a4;
+ (id)resultFromStrWithType:(long long)a0;
+ (void)setImageWithImageView:(id)a0 urls:(id)a1 placeholderImage:(id)a2 options:(long long)a3 completion:(id /* block */)a4;
+ (void)setImageWithButton:(id)a0 url:(id)a1 forState:(unsigned long long)a2 placeholderImage:(id)a3 completed:(id /* block */)a4;
+ (void)setImageWithButton:(id)a0 url:(id)a1 forState:(unsigned long long)a2;
+ (void)reportImageLoadTrackerWithRequest:(id)a0 beginTimeInterval:(double)a1 view:(id)a2 image:(id)a3 data:(id)a4 from:(long long)a5;
+ (void)setImageWithImageView:(id)a0 url:(id)a1 placeholderImage:(id)a2;
+ (void)setImageWithImageView:(id)a0 urls:(id)a1 placeholderImage:(id)a2 completion:(id /* block */)a3;
+ (void)ignoreWebImageSizeCheckWithView:(id)a0;
+ (long long)changeResultFromWithFrom:(long long)a0;
+ (void)checkWebImageSizeWithRequest:(id)a0 view:(id)a1 image:(id)a2;
+ (void)setImageWithImageView:(id)a0 urls:(id)a1 placeholderImage:(id)a2;

@end

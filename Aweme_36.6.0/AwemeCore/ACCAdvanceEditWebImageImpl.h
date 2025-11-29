@class NSString;

@interface ACCAdvanceEditWebImageImpl : NSObject <DVEWebImageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animatedImageView;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2 completion:(id /* block */)a3;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1;
+ (void)button:(id)a0 setImageWithURLArray:(id)a1 forState:(unsigned long long)a2 placeholder:(id)a3 completion:(id /* block */)a4;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2;
+ (void)cancelImageViewRequest:(id)a0;
+ (id)image:(id)a0 resizeToSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2;


@end

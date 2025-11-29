@class NSString;

@interface SLIWebImageServiceDefaultImpl : NSObject <SLIWebImageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestImageWithURLArray:(id)a0 imageView:(id)a1 placeholder:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 extraInfo:(id)a4 completion:(id /* block */)a5;


@end

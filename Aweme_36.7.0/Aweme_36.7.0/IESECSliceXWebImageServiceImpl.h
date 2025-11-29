@class NSString;

@interface IESECSliceXWebImageServiceImpl : NSObject <SLIWebImageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)p_imageOptionsForSliceWithPreferredSize:(struct CGSize { double x0; double x1; })a0;
+ (id)requestImageWithURLArray:(id)a0 imageView:(id)a1 placeholder:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 extraInfo:(id)a4 completion:(id /* block */)a5;


@end

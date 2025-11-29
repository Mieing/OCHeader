@interface IESGCPResourceUtil : NSObject

+ (void)setImageForImageView:(id)a0 imageName:(id)a1;
+ (void)imageWithImageName:(id)a0 completion:(id /* block */)a1;
+ (void)webpImageWithWebpName:(id)a0 completion:(id /* block */)a1;
+ (void)setImageForButton:(id)a0 imageName:(id)a1;
+ (void)setBackgroundImageForButton:(id)a0 imageName:(id)a1;
+ (id)resourceCDNURLsWithResourceName:(id)a0 tosName:(id)a1;
+ (id)imageCDNURLsResourceWithImageName:(id)a0;
+ (void)downloadCDNImageWithImageUrls:(id)a0 isWebp:(BOOL)a1 completion:(id /* block */)a2;
+ (void)imageWithImageName:(id)a0 completion:(id /* block */)a1 CDNHandler:(id /* block */)a2;
+ (void)setCDNImageForImageView:(id)a0 imageUrls:(id)a1 completion:(id /* block */)a2;
+ (void)setCDNImageForButton:(id)a0 imageUrls:(id)a1 completion:(id /* block */)a2;
+ (void)setCDNBackgroundImageForButton:(id)a0 imageUrls:(id)a1 completion:(id /* block */)a2;
+ (id)webpCDNURLsResourceWithWebpName:(id)a0;
+ (id)imageCDNVersionWithImageName:(id)a0;
+ (void)reportGetImageResultWithImageName:(id)a0 image:(id)a1 sourceType:(long long)a2 error:(id)a3;

@end

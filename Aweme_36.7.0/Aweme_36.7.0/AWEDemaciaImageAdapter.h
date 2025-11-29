@class NSString;

@interface AWEDemaciaImageAdapter : NSObject <AWEDemaciaImageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageWithImageName:(id)a0 bundleName:(id)a1;
- (void)setImageView:(id)a0 imageUrlArrray:(id)a1 placeholder:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)setImageView:(id)a0 imageURL:(id)a1;

@end

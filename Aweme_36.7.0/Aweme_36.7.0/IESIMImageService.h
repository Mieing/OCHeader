@class NSString;

@interface IESIMImageService : HTSService <IESIMImageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isExistInDefaultImageCache:(id)a0;
- (void)stagingImageInfo:(id)a0 cacheName:(id)a1 identificationKey:(id)a2;
- (void)requestImageWithURLArray:(id)a0 completion:(id /* block */)a1;
- (id)imImageFromColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)roundedCornerImageWithCornerRadius:(double)a0 withImage:(id)a1 size:(struct CGSize { double x0; double x1; })a2;

@end

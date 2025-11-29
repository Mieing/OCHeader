@class NSString;
@protocol ACCAWEImageAlbumImagePickerViewDataSource;

@interface AWEACCImageAlbumPickerDelegateMiddleMan : NSObject <AWEImageAlbumImagePickerViewDataSource>

@property (weak, nonatomic) id<ACCAWEImageAlbumImagePickerViewDataSource> originDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfImagesForAlbumImagePicker;
- (id)cachedImageForIndex:(long long)a0;
- (id)itemExtraInfoForIndex:(long long)a0;
- (void)fetchImageForIndex:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end

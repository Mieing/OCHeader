@class MMFinderLiveImageStickerItem, UIViewController, NSString;
@protocol MMFinderLiveStickerContentPickerDelegate;

@interface MMFinderLiveStickerImagePicker : NSObject <MMFinderLiveStickerContentPicking>

@property (retain, nonatomic) MMFinderLiveImageStickerItem *stickerItem;
@property (weak, nonatomic) UIViewController *hostingVc;
@property (nonatomic) double targetDimension;
@property (weak, nonatomic) id<MMFinderLiveStickerContentPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTargetDimension:(double)a0;
- (void)showWithStickerItem:(id)a0 inViewController:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithEditImageAttr:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)a0;
- (id)imageResizedToTargetDimension:(id)a0;
- (void).cxx_destruct;

@end

@class PHAsset, NSString;

@interface AWEIMSkyFlashBackAvatarComponent : AWEIMSkylightBaseComponent <AWEIMSkylightCellComponentEvent>

@property (retain, nonatomic) PHAsset *localAsset;
@property (copy, nonatomic) NSString *requestLocalIdentifier;
@property (nonatomic) long long localImageRequestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cancelImageRequest;
- (void)p_updatePresenter;
- (void)updateComponentAfterModelUpdate;
- (void)skyCellWillDisplay;
- (void)p_setUIImageViewWithPHAsset:(id)a0 placeholder:(id)a1;
- (struct CGSize { double x0; double x1; })imageSizeWithPHAsset:(id)a0 imageWidth:(long long)a1;
- (void).cxx_destruct;

@end

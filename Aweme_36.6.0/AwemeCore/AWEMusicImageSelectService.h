@class NSArray, NSString, UIView;

@interface AWEMusicImageSelectService : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, DUXActionSheetDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSArray *imageDataArray;
@property (copy, nonatomic) NSString *selectTitle;
@property (nonatomic) long long maxFileSize;
@property (nonatomic) long long minWidth;
@property (nonatomic) long long minHeight;
@property (nonatomic) BOOL isMultiSelect;
@property (nonatomic) long long multiSelectNum;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL isNeedCrop;
@property (nonatomic) struct CGSize { double width; double height; } cropRatio;
@property (nonatomic) long long cropingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (void)didActionSheetDismiss:(id)a0;
- (BOOL)isSatisfyImageSizeWithImage:(id)a0;
- (void)showTOCropVCWithStyle:(long long)a0 imageData:(id)a1 aspectRato:(struct CGSize { double x0; double x1; })a2;
- (void)showAwemeImagePickerWithIsMultiSelect:(BOOL)a0 multiSelectNum:(long long)a1 isNeedCrop:(BOOL)a2 cropRatio:(struct CGSize { double x0; double x1; })a3 cropingStyle:(long long)a4 maxFileSize:(unsigned long long)a5;
- (void)selectImageWithSourceView:(id)a0 allowSource:(unsigned long long)a1 isMultiSelect:(BOOL)a2 multiSelectNum:(long long)a3 isNeedCrop:(BOOL)a4 cropRatio:(struct CGSize { double x0; double x1; })a5 cropingStyle:(long long)a6 maxFileSize:(unsigned long long)a7 minWidth:(unsigned long long)a8 minHeight:(unsigned long long)a9 completionBlock:(id /* block */)a10;
- (void).cxx_destruct;
- (void)reset;

@end

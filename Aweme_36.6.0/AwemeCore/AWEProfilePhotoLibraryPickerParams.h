@class UIImage, UIView;

@interface AWEProfilePhotoLibraryPickerParams : NSObject

@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) unsigned long long editorType;
@property (nonatomic) unsigned long long cropingStyle;
@property (retain, nonatomic) UIImage *coverMaskImage;
@property (nonatomic) struct CGSize { double width; double height; } rato;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ dismissedBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end

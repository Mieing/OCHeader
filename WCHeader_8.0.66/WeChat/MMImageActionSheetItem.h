@class NSString, MMUIViewController, UIImage, MMImageActionSheet;

@interface MMImageActionSheetItem : MMScrollActionSheetItem

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *imagePath;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isClickable;
@property (weak, nonatomic) MMUIViewController *curViewController;
@property (weak, nonatomic) MMImageActionSheet *imageActionSheet;

- (id)init;
- (void)handleWithImage;
- (void)onImageActionSheetDidAppear;
- (void)onImageActionSheetDidChangeImage;
- (void).cxx_destruct;

@end

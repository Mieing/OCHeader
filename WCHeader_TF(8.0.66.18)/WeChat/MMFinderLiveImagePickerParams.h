@class NSString;

@interface MMFinderLiveImagePickerParams : NSObject

@property (nonatomic) unsigned long long pickerScene;
@property (nonatomic) struct CGSize { double width; double height; } cropImageRatio;
@property (nonatomic) BOOL showPreviewButton;
@property (retain, nonatomic) NSString *previewBulletinTitle;

- (void).cxx_destruct;

@end

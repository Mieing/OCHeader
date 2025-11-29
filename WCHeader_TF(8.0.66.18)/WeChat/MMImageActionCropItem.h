@class UIImage, NSString, MMLongImageCropResult;

@interface MMImageActionCropItem : MMImageActionSheetItem <MMLongImageCropViewControllerDelelgate>

@property (retain, nonatomic) MMLongImageCropResult *croppedResult;
@property (retain, nonatomic) UIImage *originImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

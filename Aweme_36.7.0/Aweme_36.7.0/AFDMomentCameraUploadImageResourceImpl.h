@class UIImage, NSString;

@interface AFDMomentCameraUploadImageResourceImpl : NSObject <AFDMomentCameraUploadImageResource>

@property (retain, nonatomic) UIImage *originalImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayRect;
@property (readonly, nonatomic) UIImage *publishImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

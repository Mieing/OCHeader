@class IESLiveShareCaptureWidget, NSString, UIImage, UIView;

@interface IESLiveScreenCaptureCommand : NSObject

@property (retain, nonatomic) UIView *mediaView;
@property (retain, nonatomic) UIImage *screenshot;
@property (weak, nonatomic) IESLiveShareCaptureWidget *widget;
@property (copy, nonatomic) NSString *privacyCert;
@property (nonatomic) double waterMarkScale;
@property (copy, nonatomic) id /* block */ didFinishSave;

- (void)saveAlbum;
- (id)initWithCaptureWidget:(id)a0;
- (id)tryToFindMetalView;
- (BOOL)renderWaterMarkOnScreenshot;
- (void).cxx_destruct;
- (BOOL)takeScreenshot;

@end

@class UIImage, WAScreenshotContextInfo, WAContact;

@interface WADefaultPosterViewModel : NSObject

@property (retain, nonatomic) UIImage *originalScreenshot;
@property (retain, nonatomic) WAScreenshotContextInfo *screenshotContextInfo;
@property (retain, nonatomic) WAContact *contact;
@property (retain, nonatomic) UIImage *weappSunCodeImage;

- (BOOL)canGeneratePoster;
- (void).cxx_destruct;

@end

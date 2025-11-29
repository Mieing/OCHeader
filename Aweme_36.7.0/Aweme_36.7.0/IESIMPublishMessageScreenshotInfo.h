@class UIImage, NSError, UIView, IESIMPublishMessageTrackObject;

@interface IESIMPublishMessageScreenshotInfo : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) IESIMPublishMessageTrackObject *trackObj;

- (void).cxx_destruct;

@end

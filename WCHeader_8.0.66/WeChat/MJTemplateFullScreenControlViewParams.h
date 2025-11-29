@class UIImage, WCMomentsTemplateShareInfo;

@interface MJTemplateFullScreenControlViewParams : NSObject

@property (retain, nonatomic) WCMomentsTemplateShareInfo *shareInfo;
@property (nonatomic) double videoDuration;
@property (nonatomic) BOOL bForbidAutoHidden;
@property (nonatomic) BOOL forbidensSeek;
@property (nonatomic) BOOL forbidensTouchHlighlight;
@property (retain, nonatomic) UIImage *dotActiveImage;
@property (retain, nonatomic) UIImage *dotInactiveImage;

- (void).cxx_destruct;

@end

@class UIImage;

@interface WCPlayerConfigFullScreenProgressBarParams : NSObject

@property (nonatomic) BOOL bForbidAutoHidden;
@property (nonatomic) BOOL forbidensSeek;
@property (nonatomic) BOOL forbidensTouchHlighlight;
@property (retain, nonatomic) UIImage *dotActiveImage;
@property (retain, nonatomic) UIImage *dotInactiveImage;
@property (nonatomic) BOOL autoExpandProgressOnce;

- (void).cxx_destruct;

@end

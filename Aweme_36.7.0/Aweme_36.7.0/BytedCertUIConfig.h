@class UIColor, UIFont, UIImage;

@interface BytedCertUIConfig : NSObject

@property (nonatomic) long long statusBarStyle;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *secondBackgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *secondTextColor;
@property (retain, nonatomic) UIColor *timeColor;
@property (retain, nonatomic) UIColor *circleColor;
@property (retain, nonatomic) UIFont *actionLabelFont;
@property (retain, nonatomic) UIFont *readNumberLabelFont;
@property (retain, nonatomic) UIFont *actionCountTipLabelFont;
@property (nonatomic) double faceDetectionProgressStrokeWidth;
@property (retain, nonatomic) UIImage *faceDetectionBgImage;
@property (retain, nonatomic) UIImage *backBtnImage;
@property (nonatomic) BOOL isDarkMode;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end

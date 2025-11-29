@class AWEIMImageTrackerConfig, NSArray, NSString, UIImage, AWEIMUser;
@protocol AWEIMImageProtocol;

@interface AWEIMMessageAvatarPresenterProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) NSArray *urlArray;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) NSArray *tagUrlArray;
@property (copy, nonatomic) NSString *tagPlaceholderImageName;
@property (retain, nonatomic) AWEIMImageTrackerConfig *trackerConfig;
@property (retain, nonatomic) AWEIMUser *user;
@property (nonatomic) double roundCornerRatio;
@property (retain, nonatomic) id<AWEIMImageProtocol> cachedPlaceholderKeyProvider;
@property (nonatomic) BOOL tapEnable;
@property (nonatomic) BOOL doubleTapEnable;
@property (nonatomic) BOOL longPressEnable;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ doubleTapAction;
@property (copy, nonatomic) id /* block */ longPressAction;
@property (nonatomic) BOOL enableBlurImage;
@property (nonatomic) double blurRadius;

- (void).cxx_destruct;

@end

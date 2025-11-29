@class NSString, UIColor, NSNumber;

@interface IESLiveLynxViewControllerConfig : IESLiveBaseLynxViewConfig

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hideNavBar;
@property (nonatomic) BOOL hideMore;
@property (nonatomic) BOOL hideStatusBar;
@property (nonatomic) BOOL enableCustomizedRightButton;
@property (copy, nonatomic) NSString *containerBackgroundColor;
@property (copy, nonatomic) NSString *statusBarColor;
@property (retain, nonatomic) UIColor *statusBarBackgroundColor;
@property (retain, nonatomic) NSNumber *webViewTopMargin;
@property (nonatomic) BOOL fromLiveOutside;
@property (nonatomic) BOOL forbidRightBack;
@property (copy, nonatomic) NSString *pageSource;
@property (nonatomic) BOOL enableFullScreen;
@property (nonatomic) BOOL supportExchangeTheme;

- (void).cxx_destruct;

@end

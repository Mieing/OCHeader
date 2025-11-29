@class NSNumber, NSString;

@interface PuzzleFullScreenControllerUIConfig : PuzzleBaseUIConfig

@property (retain, nonatomic) NSNumber *forbidRightBack;
@property (retain, nonatomic) NSNumber *forbidFullscreenBack;
@property (retain, nonatomic) NSNumber *forceDarkStyle;
@property (nonatomic) BOOL hideNavBar;
@property (nonatomic) BOOL hideStatusBar;
@property (copy, nonatomic) NSString *statusBarBackgroundColor;
@property (copy, nonatomic) NSString *statusBarColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *navBarColor;
@property (nonatomic) BOOL transStatusBar;
@property (nonatomic) BOOL supportExchangeTheme;
@property (nonatomic) BOOL topLevel;
@property (nonatomic) BOOL showError;
@property (nonatomic) BOOL enablePadAdapter;
@property (nonatomic) BOOL enableContentFullScreen;
@property (nonatomic) double padRatio;
@property (nonatomic) BOOL disableResetNaviBarHidden;

- (id)initWithURL:(id)a0 keneralType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (id)initWithSchema:(id)a0;

@end

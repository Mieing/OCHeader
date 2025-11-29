@class NSString, NSArray, WCEditImageCropToolBarViewUIConfig, NSDictionary;

@interface WCEditViewControllerUIConfig : NSObject

@property (retain, nonatomic) NSString *finishButtonWording;
@property (nonatomic) double bottomBarMidY;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentDisplayFrame;
@property (nonatomic) BOOL canAdjustImageEditZoomMinVal;
@property (nonatomic) struct CGPoint { double x; double y; } widgetInitialPosition;
@property (nonatomic) BOOL inputTextAlignCenter;
@property (retain, nonatomic) NSArray *customVideoBottomButtonOrder;
@property (retain, nonatomic) NSArray *customImageBottomButtonOrder;
@property (nonatomic) BOOL imageAspectFitInContentDisplayFrame;
@property (retain, nonatomic) WCEditImageCropToolBarViewUIConfig *cropBarConfig;
@property (retain, nonatomic) NSArray *textStyleOrders;
@property (nonatomic) BOOL editTextMenuCanChangeLine;
@property (nonatomic) BOOL textWidgetForceFillScreenWidth;
@property (nonatomic) BOOL useEmotionStyleColor;
@property (nonatomic) BOOL hideTextEdit;
@property (copy, nonatomic) NSString *firstShowCropTips;
@property (copy, nonatomic) NSString *timeCropBtnText;
@property (nonatomic) BOOL isBottomBarLaunchMiaoJianBtnEnabled;
@property (nonatomic) unsigned long long launchMiaoJianAppScene;
@property (nonatomic) long long launchMiaoJianAppLaunchType;
@property (retain, nonatomic) NSString *launchMiaoJianBtnReportViewId;
@property (nonatomic) unsigned long long launchMiaoJianBtnReportLogId;
@property (nonatomic) unsigned long long launchMiaoJianBtnReportPolicy;
@property (retain, nonatomic) NSDictionary *launchMiaoJianBtnReportParams;

+ (id)configForEmotionEditWithContentDisplayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isCropTimeOnly:(BOOL)a1;
+ (id)configForEmotionEditWithContentDisplayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateEmotionEditContentDisplayFrameWithViewW:(double)a0 height:(double)a1 imageSize:(struct CGSize { double x0; double x1; })a2;

- (BOOL)bottomBarMidYIsValid;
- (BOOL)contentDisplayFrameIsValid;
- (BOOL)forceSetWidgetDeleteBarToScreedBottom;
- (BOOL)widgetInitialPositionIsValid;
- (id)description;
- (void).cxx_destruct;

@end

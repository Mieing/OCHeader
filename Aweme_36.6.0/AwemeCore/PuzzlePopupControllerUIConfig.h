@class NSString;

@interface PuzzlePopupControllerUIConfig : PuzzleBaseUIConfig

@property (copy, nonatomic) NSString *gravity;
@property (nonatomic) BOOL showMask;
@property (copy, nonatomic) NSString *maskColorString;
@property (nonatomic) double maskAlpha;
@property (nonatomic) double rateHeight;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double horizontalWidth;
@property (nonatomic) double horizontalHeight;
@property (nonatomic) double widthPercent;
@property (nonatomic) double heightPercent;
@property (nonatomic) double horizontalWidthPercent;
@property (nonatomic) double horizontalHeightPercent;
@property (nonatomic) double horizontalRadius;
@property (nonatomic) double portraitAbsoluteHeight;
@property (nonatomic) double radius;
@property (nonatomic) BOOL landscapeCustomGravity;
@property (nonatomic) BOOL maskClickDisable;
@property (nonatomic) BOOL fixedHeight;
@property (nonatomic) double marginBottom;
@property (nonatomic) double marginRight;
@property (retain, nonatomic) NSString *closeType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } closeTargetRect;
@property (nonatomic) BOOL pullDownClose;
@property (nonatomic) BOOL pullDownIndicatorNotShow;
@property (copy, nonatomic) NSString *pullDownIndicatorColor;
@property (nonatomic) double pullDownHeight;
@property (nonatomic) BOOL upFullScreen;
@property (nonatomic) double upOffsetHeight;
@property (copy, nonatomic) NSString *upStatusBarBgColor;
@property (nonatomic) double upHeightPercent;
@property (nonatomic) BOOL upTransStatusBar;
@property (nonatomic) BOOL useHost;
@property (nonatomic) long long closeIconPosition;
@property (nonatomic) BOOL addSafeAreaHeight;
@property (nonatomic) BOOL needLandScapeNotchWidth;

- (id)initWithURL:(id)a0 keneralType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (id)initWithSchema:(id)a0;

@end

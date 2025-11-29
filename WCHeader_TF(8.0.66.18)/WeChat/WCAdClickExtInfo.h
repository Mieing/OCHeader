@class NSString, UIView;

@interface WCAdClickExtInfo : NSObject

@property (nonatomic) BOOL canvasPageUseNormalAnimation;
@property (retain, nonatomic) UIView *originView;
@property (nonatomic) int customCanvasScene;
@property (nonatomic) double outPlaybackTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRectInScreenForCanvas;
@property (nonatomic) BOOL processDynamicCanvas;
@property (retain, nonatomic) NSString *adDynamicCanvasVCExtCheckPattern;
@property (nonatomic) BOOL needReportClick;

+ (id)extInfoWithOriginView:(id)a0;
+ (id)extInfoWithOriginView:(id)a0 customCanvasScene:(int)a1;
+ (id)extInfoWithCanvasPageUseNormalAnimation;

- (id)init;
- (void).cxx_destruct;

@end

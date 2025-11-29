@class WCRedEnvelopesStoryViewController, NSDate, UIView, WCRedEnvelopesRedEnvelopesDetailViewController, MMTableView;

@interface WCRedEnvelopesStoryDargUtil : MMObject

@property (weak, nonatomic) WCRedEnvelopesStoryViewController *backViewController;
@property (weak, nonatomic) WCRedEnvelopesRedEnvelopesDetailViewController *frontViewController;
@property (weak, nonatomic) MMTableView *frontView;
@property (weak, nonatomic) UIView *backView;
@property (nonatomic) double frontViewTop;
@property (nonatomic) BOOL isHasStory;
@property (nonatomic) BOOL isDragEnd;
@property (nonatomic) BOOL isNeedRecover;
@property (nonatomic) BOOL isNeedDoAuto;
@property (retain, nonatomic) NSDate *dragStartTime;
@property (nonatomic) double lastMovement;
@property (nonatomic) double beginTouchPosY;
@property (nonatomic) double lastTouchPosY;
@property (nonatomic) double lastBottomY;
@property (nonatomic) BOOL isDragEnd_back;
@property (nonatomic) BOOL isNeedRecover_back;
@property (nonatomic) BOOL isNeedDoAuto_back;
@property (retain, nonatomic) NSDate *dragStartTime_back;
@property (nonatomic) double lastMovement_back;
@property (nonatomic) double beginTouchPosY_back;
@property (nonatomic) double beginTouchPosX_back;
@property (nonatomic) double lastTouchPosY_back;
@property (nonatomic) double beginToZoomDistance;
@property (nonatomic) struct CGSize { double width; double height; } beginScrollContentSize_back;
@property (nonatomic) struct CGPoint { double x; double y; } beginScrollContentOffset_back;
@property (nonatomic) BOOL hasTriggerLightShock;
@property (nonatomic) long long enterBackCount;
@property (nonatomic) BOOL isDoneFromChangeState;
@property (copy, nonatomic) id /* block */ animationInHide;
@property (copy, nonatomic) id /* block */ hideCompletetion;
@property (copy, nonatomic) id /* block */ animationInShow;
@property (copy, nonatomic) id /* block */ showCompletetion;
@property (copy, nonatomic) id /* block */ autoHideCompletetion;
@property (copy, nonatomic) id /* block */ frontViewShowCompletion;
@property (nonatomic) BOOL hasBeginDrag;
@property (nonatomic) BOOL shouldIgnoreDrag;

+ (void)lightShock;

- (id)initWithFrontViewController:(id)a0 frontView:(id)a1 backViewController:(id)a2 frontViewTop:(double)a3;
- (void)setHideAnimation:(id /* block */)a0 hideCompletetion:(id /* block */)a1;
- (void)setShowAnimation:(id /* block */)a0 showCompletetion:(id /* block */)a1;
- (void)processFrontViewGesture:(id)a0;
- (void)showStoryVC;
- (id)generateMaskImage:(id)a0;
- (void)hideStoryVC;
- (void)processBackViewGesture:(id)a0;
- (void).cxx_destruct;

@end

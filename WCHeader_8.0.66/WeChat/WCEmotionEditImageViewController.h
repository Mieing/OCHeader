@class NSString, NSMutableArray, WCEditVideoPushPopTransition;

@interface WCEmotionEditImageViewController : WCEditImageViewController

@property (retain, nonatomic) WCEditVideoPushPopTransition *customTransitionDelegate;
@property (retain, nonatomic) NSString *finishWording;
@property (retain, nonatomic) NSMutableArray *assetsEditTracker;
@property (nonatomic) BOOL multiSelectStyle;
@property (nonatomic) BOOL forbidRightGesture;

- (void)showEditImageViewOn;
- (void)setupTransitioningDelegate;
- (void)OnClickEditImageBackBarButton;
- (void)OnSelectedButtonClicked;
- (void)createEditInfo:(id)a0;
- (void)dealSelectResult:(id)a0;
- (void)editImageDoneReport:(int)a0 asset:(id)a1 editImageAttr:(id)a2;
- (BOOL)shouldHideNavigationBar;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end

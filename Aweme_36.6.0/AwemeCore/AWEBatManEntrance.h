@class AWEAwemeModel, NSTimer, HMDNetworkSpeedData, UIView, NSString, AWEBatManStickerAnimationView, UIButton, UIViewController, AWEBatMan;
@protocol AWEBatManEntranceDelegate, AWEBatManManagerProtocol;

@interface AWEBatManEntrance : NSObject <AWEBatManLoadStatusDelegate>

@property (retain, nonatomic) NSTimer *showBatManEnteranceTimer;
@property (nonatomic) unsigned long long batManLoadStatus;
@property (retain, nonatomic) AWEBatManStickerAnimationView *customBatManEnterance;
@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIButton *normalBatManEnterance;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) HMDNetworkSpeedData *speedData;
@property (retain, nonatomic) AWEBatMan *batMan;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEBatManEntranceDelegate> delegate;
@property (weak, nonatomic) id<AWEBatManManagerProtocol> batManDelegate;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) BOOL hasStopped;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)batManCenterStatusDidChanged:(unsigned long long)a0;
- (void)batManCenterUserDidClosedBatMan;
- (void)stopShow;
- (void)didClickedCloseButton;
- (void)showIfNeeded;
- (void)onShowBatManEnterence;
- (void)showBatManEnterence:(BOOL)a0;
- (void)showIfNeededWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)disableTimerIfNeeded;
- (void)removeCustomBatManEnterance;
- (void)removeNormalBatManEnterance;
- (void)showCustomBatManEnterance;
- (void)showNormalBatManEnterance:(BOOL)a0;
- (void)presentBatManController:(BOOL)a0;
- (void)customPresentBatManController;
- (void)normalPresentBatManController;
- (void)showEntranceIfNeeded:(BOOL)a0;
- (void).cxx_destruct;

@end

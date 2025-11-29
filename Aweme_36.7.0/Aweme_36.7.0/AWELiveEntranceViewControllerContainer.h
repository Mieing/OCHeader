@class NSString, UIViewController;
@protocol AWELiveCamera, IESLiveOpenLiveProtocol;

@interface AWELiveEntranceViewControllerContainer : UIViewController <AWELiveEntranceViewControllerProtocol>

@property (retain, nonatomic) UIViewController<IESLiveOpenLiveProtocol> *childVC;
@property (nonatomic) BOOL enableBack;
@property (copy, nonatomic) id /* block */ backHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ buildCameraAfterPassAuthBlock;
@property (retain, nonatomic) id<AWELiveCamera> camera;
@property (copy, nonatomic) id /* block */ hideBottomBarHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShootWay:(id)a0;
- (void)applyFilter:(id)a0;
- (void)willSwitchToOtherTab;
- (void)willSwitchToLiveTab;
- (void)didEnterLiveTabWithStartTime:(double)a0;
- (void)setEntryFaceSticker:(id)a0;
- (void)updateLiveModel:(id)a0;
- (void)applyWhiteValue:(float)a0;
- (void)applySmoothValue:(float)a0;
- (void)applyEyeValue:(float)a0;
- (void)applyCheekValue:(float)a0;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)viewDidLoad;
- (void)setActive:(BOOL)a0;

@end

@class AFDEffectListModel, NSString, AFDBirthdayPopup;

@interface AFDBirthdayPopupController : UIViewController <AFDBirthdayPopupProtocol>

@property (retain, nonatomic) AFDBirthdayPopup *popupView;
@property (retain, nonatomic) AFDEffectListModel *model;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)show:(id)a0 enterFrom:(id)a1;
+ (void)dismiss;

- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)appWillResignActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)appDidBecomeActive:(id)a0;
- (void)addObservers;

@end

@class UITapGestureRecognizer, NSString, UIView, UIViewController;

@interface AWEChallengeDetailHalfScreenViewController : UIViewController <UIGestureRecognizerDelegate, AWEChallengeDetailContainerViewControllerDelegate>

@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *challengeName;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double height;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIViewController *halfScreenVC;
@property (retain, nonatomic) UITapGestureRecognizer *dismissTap;
@property (retain, nonatomic) UIView *dismissAreaView;
@property (nonatomic) BOOL hasAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showChallengeDetailHalfScreenOnVC:(id)a0 challengeID:(id)a1 challengeName:(id)a2 isCommerce:(BOOL)a3 completion:(id /* block */)a4 dismissBlock:(id /* block */)a5;
+ (id)showChallengeDetailHalfScreenMediaOnVC:(id)a0 challengeID:(id)a1 challengeName:(id)a2 isCommerce:(BOOL)a3 height:(double)a4 completion:(id /* block */)a5 dismissBlock:(id /* block */)a6;
+ (id)showChallengeDetailHalfScreenOnVC:(id)a0 challengeID:(id)a1 challengeName:(id)a2 isCommerce:(BOOL)a3 style:(unsigned long long)a4 height:(double)a5 completion:(id /* block */)a6 dismissBlock:(id /* block */)a7;

- (id)initWithChallengeID:(id)a0 challengeName:(id)a1 isCommerce:(BOOL)a2 style:(unsigned long long)a3 height:(double)a4 completion:(id /* block */)a5 dismissBlock:(id /* block */)a6;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dismiss:(id)a0;
- (void)setupUI;
- (void)closeButtonTapped;

@end

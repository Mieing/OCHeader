@class AWEUnfoldBarView, NSString;

@interface AWEPlayInteractionUnfoldFoldedHotSpotVideoElement : AWEPlayInteractionLeftElement <UIGestureRecognizerDelegate, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEUnfoldBarView *unfoldBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1;

- (id)activateInfoWithData:(id)a0;
- (void)viewDidDisposed;
- (void)configureUI;
- (void)selfTapped:(id)a0;
- (void)updateUnfoldBar;
- (BOOL)elementAppearLowPriorityNeedAvoid;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

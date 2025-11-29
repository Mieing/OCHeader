@class NSString;

@interface MMUILandscapeSheetViewController : MMUIViewController <MMUIViewControllerOverrideOrientationMaskProtocol>

@property (copy, nonatomic) id /* block */ onRequirePortrait;
@property (nonatomic) unsigned long long overrideOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)commonInit;
- (BOOL)isFullPageViewOverLiveRoom;
- (void)adjustTableViewInset:(id)a0;
- (BOOL)isPortrait;
- (BOOL)shouldOverrideMethods;
- (double)getContentViewY;
- (double)getNavigationBarHeight;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (void)didAskSearchControllerShouldBeginWithResult:(BOOL)a0;
- (void)didAppearFromSearchController;
- (void).cxx_destruct;

@end

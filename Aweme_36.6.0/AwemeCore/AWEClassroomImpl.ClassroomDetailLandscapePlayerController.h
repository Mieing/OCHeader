@interface AWEClassroomImpl.ClassroomDetailLandscapePlayerController : UIViewController {
    void /* unknown type, empty encoding */ inlineContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sheetContainer;
    void /* unknown type, empty encoding */ isSheetShowing;
    void /* unknown type, empty encoding */ sheet;
    void /* unknown type, empty encoding */ kickoutShowing;
    void /* unknown type, empty encoding */ shouldShowKickout;
    void /* unknown type, empty encoding */ pageVisible;
    void /* unknown type, empty encoding */ lastVisibleTime;
    void /* unknown type, empty encoding */ visibleByAlert;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ player;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)viewDidLayoutSubviews;
- (void)sheetContainerClicked:(id)a0;
- (void)didBecomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end

@class DVEVCContext, ACCChapterVideoToolBar;
@protocol ACCChapterVideoToolBarDelegate;

@interface ACCChapterControlBarViewController : UIViewController

@property (weak, nonatomic) DVEVCContext *vcContext;
@property (retain, nonatomic) ACCChapterVideoToolBar *toolview;
@property (weak, nonatomic) id<ACCChapterVideoToolBarDelegate> delegate;
@property (nonatomic) BOOL progressBarButtonIsSelected;

- (void)setShowChapterProgressBar:(BOOL)a0 showClearBtn:(BOOL)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end

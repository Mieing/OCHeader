@class UIView;
@protocol WXGMigrationClientGuideViewDelegate;

@interface WXGMigrationClientGuideView : MMWindowViewController

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<WXGMigrationClientGuideViewDelegate> delegate;

- (id)initWithScene:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)setupUiComponent;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateView;
- (void)showImportFromOtherDevice;
- (void)onCancelView;
- (void).cxx_destruct;

@end

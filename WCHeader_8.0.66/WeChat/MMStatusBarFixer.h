@interface MMStatusBarFixer : MMWindowViewController

@property (nonatomic) long long statusBarStyle;

+ (void)tryFixStatusBar;

- (id)init;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(BOOL)a0;

@end

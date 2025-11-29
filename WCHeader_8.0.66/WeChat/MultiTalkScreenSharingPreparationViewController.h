@class UIButton, NSString;
@protocol MultiTalkScreenSharingPreparationViewControllerDelegate;

@interface MultiTalkScreenSharingPreparationViewController : MultiTalkScreenSharingBaseViewController <MultiTalkMgrExt>

@property (retain, nonatomic) UIButton *startButton;
@property (nonatomic) BOOL startButtonClicked;
@property (copy, nonatomic) NSString *fileValidationPath;
@property (nonatomic) long long fileValidationStatus;
@property (weak, nonatomic) id<MultiTalkScreenSharingPreparationViewControllerDelegate> delegate;

- (id)init;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)loadStartButton;
- (void)startButtonClicked:(id)a0;
- (void)didFinishFileValidation;
- (void)didStartPresentation;
- (void)didFailToStartPresentation;
- (void)didSetTargetViewController:(id)a0;
- (void)validateFileIfNeeded;
- (void)fileValidationDidTimeOut;
- (void)onMultiTalkScreenSharingStartValidatingFileWithPath:(id)a0;
- (void)onMultiTalkScreenSharingFinishValidatingFileWithPath:(id)a0 ret:(int)a1 fileStatus:(int)a2;
- (void).cxx_destruct;

@end

@class NSString, KidsWatchButton, KidsWatchTipsCardView;
@protocol KidsWatchKidsRegisterDoneViewControllerDelegate;

@interface KidsWatchKidsRegisterDoneViewController : KidsWatchBaseViewController

@property (retain, nonatomic) KidsWatchTipsCardView *tipsCardView;
@property (retain, nonatomic) KidsWatchButton *nextButton;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *openID;
@property (weak, nonatomic) id<KidsWatchKidsRegisterDoneViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)setupWithData:(id)a0;
- (void)initSubviews;
- (BOOL)forceCloseBarButtonItem;
- (void)onTapCloseBarButtonItem;
- (void)onTapNextButton;
- (void).cxx_destruct;

@end

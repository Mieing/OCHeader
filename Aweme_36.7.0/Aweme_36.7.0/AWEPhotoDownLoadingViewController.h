@class NSString, UIImageView, AWEPhotoLoadingStyleConfig, NSTimer, UILabel, UIButton;
@protocol AWEPhotoDownLoadingActionDelegate;

@interface AWEPhotoDownLoadingViewController : UIViewController <AWEYearMemoryLoadingVCProtocol>

@property (retain, nonatomic) AWEPhotoLoadingStyleConfig *config;
@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UILabel *progressTitleLabel;
@property (nonatomic) BOOL didReachMinTime;
@property (nonatomic) BOOL didReachLimitAndCompleteTime;
@property (weak, nonatomic) id<AWEPhotoDownLoadingActionDelegate> delegate;
@property (nonatomic) BOOL isAppearing;
@property (copy, nonatomic) NSString *taskKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgressWithNum:(double)a0;
- (void)clickOnBack;
- (void)didCompleteLoading;
- (void)exitDownLoadingIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end

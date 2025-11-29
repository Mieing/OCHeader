@class UITextView, DUXBaseButton, NSString, UIView, DUXBaseImageView, DUXBaseLabel;

@interface AWEFeedOfflineGuideCardCellViewController : AWEFeedCellViewController <UITextViewDelegate>

@property (retain, nonatomic) DUXBaseImageView *leftImageView;
@property (retain, nonatomic) UITextView *networkTipsTextView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) DUXBaseImageView *imageView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseLabel *descLabel;
@property (retain, nonatomic) DUXBaseButton *settingsBtn;
@property (retain, nonatomic) DUXBaseButton *playBtn;
@property (retain, nonatomic) DUXBaseImageView *arrowImageView;
@property (nonatomic) double didDisplayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDisplay;
- (void)p_applicationDidEnterBackground;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)p_applicationDidBecomeActive;
- (void)p_trackDisplayEvent;
- (void)p_onSettingButtonClicked;
- (void)p_onPlayButtonClicked;
- (void)p_loginUserIdInOffline;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidLoad;
- (void)dealloc;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end

@class UITextView, NSString, IESLiveAnchorFansClubModeViewModel, UIView, UILabel, UIButton;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveAnchorFansClubModeController : UIView <UITextViewDelegate>

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlHandler;
@property (retain, nonatomic) IESLiveAnchorFansClubModeViewModel *viewModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *settingBgView;
@property (retain, nonatomic) UILabel *liveFansLabel;
@property (retain, nonatomic) UILabel *liveFanSubLabel;
@property (retain, nonatomic) UIButton *liveFansButton;
@property (retain, nonatomic) UILabel *goodsFansLabel;
@property (retain, nonatomic) UILabel *goodsFanSubLabel;
@property (retain, nonatomic) UIButton *goodsFansButton;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UITextView *fansIntroduceTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)liveFansButtonDidClick;
- (void)goodsFansButtonDidClick;
- (void)showPopUpViewWithToMode:(long long)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithViewModel:(id)a0;
- (void)setUpSubviews;

@end

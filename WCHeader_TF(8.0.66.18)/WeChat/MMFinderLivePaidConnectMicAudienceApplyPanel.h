@class UIView, MMFinderLivePaidConnectMicServiceInfo, NSArray, MMHeadImageView, MMTextView, NSString, MMUIMaskContainerView, MMFinderLiveTaskId, UIButton, MMUILabel, MMUIButton, UIScrollView;
@protocol MMFinderLivePaidConnectMicAudienceApplyPanelDelegate;

@interface MMFinderLivePaidConnectMicAudienceApplyPanel : MMPageSheetBaseView <UITextViewDelegate>

@property (retain, nonatomic) MMUIMaskContainerView *scrollContainerView;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) MMHeadImageView *headerImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *ratingButton;
@property (retain, nonatomic) MMUIButton *settingButton;
@property (retain, nonatomic) MMUILabel *connectMicDurationDescLabel;
@property (retain, nonatomic) UIView *consultContentContainerView;
@property (retain, nonatomic) MMTextView *consultContentTextView;
@property (retain, nonatomic) MMUILabel *consultWordCountLabel;
@property (retain, nonatomic) MMFinderLivePaidConnectMicServiceInfo *serviceInfo;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIButton *applyButton;
@property (retain, nonatomic) MMUILabel *waitingDescLabel;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) unsigned long long applyType;
@property (retain, nonatomic) NSArray *connectMethodViews;
@property (retain, nonatomic) UIView *connectMethodBGView;
@property (retain, nonatomic) UIView *connectMethodTopLine;
@property (retain, nonatomic) UIView *connectMethodBottomLine;
@property (nonatomic) BOOL allowAnonymous;
@property (nonatomic) BOOL allowConsultInput;
@property (weak, nonatomic) id<MMFinderLivePaidConnectMicAudienceApplyPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskId:(id)a0 serviceInfo:(id)a1 allowAnonymousApply:(BOOL)a2 allowConsultInput:(BOOL)a3;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateWithServiceInfo:(id)a0;
- (void)updateWithApplyInfo:(id)a0;
- (id)getCurrentServiceInfo;
- (void)didMoveToWindow;
- (void)initUI;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutConsultWordCountLabel;
- (void)reloadContentScrollViewMask;
- (void)reloadMethodViewSelectState;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void)onClose;
- (void)onApply;
- (void)onTapRatingButton;
- (void)onCameraSettingsTapped;
- (BOOL)applyWithAnonymousIdentity;
- (BOOL)applyUsingVideo;
- (BOOL)useBgColorStyleForConnectMethodViews;
- (id)buildGenericDescLabel;
- (double)pageSheetContentHeight;
- (double)pageSheetFullHeight;
- (void)fillUIWithServiceInfo;
- (void)pushLiteAppWithJumpInfo:(id)a0;
- (void)internalSetupAndOpenLiteAppVC:(id)a0;
- (void).cxx_destruct;

@end

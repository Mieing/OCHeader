@class UIView, NSString, AWEIMFansGroupTipsSettingViewModel, UITextView, CAShapeLayer, UIToolbar, AWEIMFansGroupMultiselectListView, UIButton, UIImageView, UILabel;

@interface AWEIMFansGroupTipsSettingViewController : UIViewController <UITextViewDelegate, AWEIMFansGroupMultiselectListViewDelegate>

@property (retain, nonatomic) AWEIMFansGroupTipsSettingViewModel *viewModel;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMFansGroupMultiselectListView *multiselectListView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIToolbar *customAccessoryView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIImageView *selectView;
@property (retain, nonatomic) UILabel *selectLabel;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL shouldBlockAnimation;
@property (nonatomic) BOOL keyboardIsShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__dismiss;
- (void)__setupUI;
- (void)moreCellTapped;
- (void)__addKVOController;
- (void)__hide;
- (void)__show;
- (void)__configUI;
- (void)__closeBtnClicked;
- (void)__confirmBtnClicked;
- (id)initWithFansGroupInfoList:(id)a0 settingType:(unsigned long long)a1;
- (void)__setupNoti;
- (void)keyboardWillChangeFrameNotification:(id)a0;
- (void)keyboardDidHideNotification:(id)a0;
- (void)boardRiseWithHeight:(double)a0 duration:(double)a1;
- (void)boardResetWithDuration:(double)a0;
- (void)__refreshWithSelectList:(id)a0;
- (void)__showAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)__hideAnimtionWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)__showDoubleCheckPopupView;
- (void)__maskViewTapAction:(id)a0;
- (void)__maskViewPanAction:(id)a0;
- (void)__contentViewPanAction:(id)a0;
- (void)__updateConfirmBtnWithEnabled:(BOOL)a0;
- (void)__updateConfirmBtnWithHasUnSelectAll:(BOOL)a0;
- (void)__batchSettingContent;
- (void)__trackSubmitEventBySettingType:(unsigned long long)a0;
- (void)__finishedit;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)textViewDidChange:(id)a0;
- (void)keyboardDidShowNotification:(id)a0;
- (void)keyboardWillHideNotification:(id)a0;

@end

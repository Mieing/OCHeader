@class AWEGradientView, AWEAntiAddictDailyAlertBaseViewModel, NSArray, NSString, UILabel, UIView, UIButton;
@protocol AWEAntiAddictDailyAlertViewDelegate;

@interface AWEAntiAddictDailyAlertSimplifyView : UIView <AWEAntiAddictDailyAlertViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UILabel *linkFooterLabel;
@property (retain, nonatomic) UIView *innerView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) AWEAntiAddictDailyAlertBaseViewModel *viewModel;
@property (weak, nonatomic) id<AWEAntiAddictDailyAlertViewDelegate> delegate;
@property (retain, nonatomic) NSArray *optionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupMainView;
- (void)setupInnerView;
- (void)addMaskBtnForOptionView:(id)a0 atIndex:(int)a1;
- (void)onClickOptionView:(id)a0;
- (id)createOptionViewForOptionsAtIndex:(int)a0;
- (void)onClickCancelBtn;
- (void)onClickConfirmBtn;
- (void)onClickLinkText;
- (void)onClickMaskView;
- (void)onDragMaskView;
- (id)initWithViewModel:(id)a0 delegate:(id)a1;
- (void)moveGradientViewToView:(id)a0;
- (void)changeColorForOptionViewSelected:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end

@class UIImageView, UITextField, UILabel, UIView, UIButton;
@protocol IESLiveInteractiveAddSeatNameViewModel;

@interface IESLiveInteractiveAddSeatNamePanel : UIView

@property (retain, nonatomic) id<IESLiveInteractiveAddSeatNameViewModel> viewModel;
@property (retain, nonatomic) UIImageView *previewBackgroundImageView;
@property (retain, nonatomic) UIView *seatBackgroundView;
@property (retain, nonatomic) UILabel *seatIndexLabel;
@property (retain, nonatomic) UILabel *seatNameLabel;
@property (retain, nonatomic) UITextField *seatNameTextField;
@property (retain, nonatomic) UIButton *okButton;

+ (id)popupItem;

- (void)didSetAttachingDIContext;
- (void)updateWithTheme:(id)a0;
- (void)textFieldEditChangedAction:(id)a0 event:(id)a1;
- (void)showSeatName:(id)a0;
- (void)setupCycleUI;
- (void)setupSquareUI;
- (void)ieslive_showKeyboard;
- (BOOL)hasChangeSeatName;
- (void)onClickOK;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end

@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveBigPartyGuestBeautyPopupView : UIView

@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *beautifyContainer;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ startBlock;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *startBtn;
@property (nonatomic) BOOL showStartAndCancelBtn;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *cancelTitle;
@property (copy, nonatomic) NSString *startTitle;
@property (retain, nonatomic) UIImageView *reverseCameraIcon;
@property (copy, nonatomic) id /* block */ reverseCameraBlock;

+ (id)popupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preview:(id)a1 type:(unsigned long long)a2 beautifyContainer:(id)a3 startTitle:(id)a4 cancelTitle:(id)a5 startBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
+ (double)popupHeightWithBeautyConfigView:(id)a0 container:(id)a1;
+ (id)popupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preview:(id)a1 type:(unsigned long long)a2 beautifyContainer:(id)a3 startBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;

- (void)didSetAttachingDIContext;
- (void)didClickCancelBtn;
- (void)didClickStartBtn;
- (void)enableReverseCamera:(id /* block */)a0;
- (void)setupReverseCameraIcon;
- (void)didTapReverseCameraIcon:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupView;

@end

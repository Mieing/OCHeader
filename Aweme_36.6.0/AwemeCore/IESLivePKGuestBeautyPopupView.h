@class UIButton, NSString, UIView;

@interface IESLivePKGuestBeautyPopupView : UIView

@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) UIView *beautifyContainer;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ startBlock;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *startBtn;
@property (nonatomic) BOOL showStartAndCancelBtn;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *cancelTitle;
@property (copy, nonatomic) NSString *startTitle;

+ (id)popupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preview:(id)a1 type:(unsigned long long)a2 beautifyContainer:(id)a3 startTitle:(id)a4 cancelTitle:(id)a5 startBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;

- (void)didSetAttachingDIContext;
- (void)didClickCancelBtn;
- (void)didClickStartBtn;
- (void).cxx_destruct;
- (void)setupView;

@end

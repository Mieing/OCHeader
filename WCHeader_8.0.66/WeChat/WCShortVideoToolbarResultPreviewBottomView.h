@class MMUIButton;

@interface WCShortVideoToolbarResultPreviewBottomView : MMUIView

@property (retain, nonatomic) MMUIButton *cancalBtn;
@property (retain, nonatomic) MMUIButton *confirmBtn;
@property (retain, nonatomic) MMUIButton *editBtn;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ editBlock;

+ (double)defaultHeight;
+ (id)genBtn;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (void)setupView;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)setEditBtnHidden:(BOOL)a0;
- (void)onClickConfirmBtn;
- (void)onClickCancelBtn;
- (void)onClickEditBtn;
- (void).cxx_destruct;

@end

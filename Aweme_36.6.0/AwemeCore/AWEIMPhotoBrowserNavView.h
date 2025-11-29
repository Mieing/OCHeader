@class AWEIMSelectableStatusView, UIView, UILabel, UIButton;

@interface AWEIMPhotoBrowserNavView : UIView

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) AWEIMSelectableStatusView *selectableStatusView;
@property (retain, nonatomic) UIButton *originalButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL original;
@property (retain, nonatomic) UIView *touchView;
@property (retain, nonatomic) UIButton *editButton;
@property (copy, nonatomic) id /* block */ originalValueChangeBlock;
@property (copy, nonatomic) id /* block */ backBlock;
@property (copy, nonatomic) id /* block */ selectAreaTappedBlock;

- (void)setSelect:(unsigned long long)a0 number:(long long)a1 animated:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isEditMode:(BOOL)a1 hideEditButton:(BOOL)a2;
- (void)tapGR:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isEditMode:(BOOL)a1;
- (void)setOriginal:(BOOL)a0 animated:(BOOL)a1;
- (void)shouldShowOriginalButton:(BOOL)a0;
- (void)shouldShowEditButton:(BOOL)a0;
- (void)originalButtonPressed:(id)a0;
- (void).cxx_destruct;
- (void)backButtonPressed:(id)a0;

@end

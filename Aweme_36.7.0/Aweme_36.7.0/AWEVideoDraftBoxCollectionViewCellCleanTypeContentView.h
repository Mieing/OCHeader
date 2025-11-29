@class UIImageView, UILabel, UIView, UIButton;

@interface AWEVideoDraftBoxCollectionViewCellCleanTypeContentView : UIView

@property (retain, nonatomic) UIView *topBgView;
@property (retain, nonatomic) UILabel *draftSizeLabel;
@property (retain, nonatomic) UIView *publishView;
@property (retain, nonatomic) UIButton *selectButton;
@property (retain, nonatomic) UIImageView *selectIcon;
@property (nonatomic) BOOL isAIEffect;

- (void)updateWithSelected:(BOOL)a0;
- (void)updateWithEditing:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

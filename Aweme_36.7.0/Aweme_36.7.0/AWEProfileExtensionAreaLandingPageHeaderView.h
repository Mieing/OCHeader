@class UILabel, DUXButton;

@interface AWEProfileExtensionAreaLandingPageHeaderView : UICollectionReusableView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) DUXButton *manageButton;
@property (retain, nonatomic) DUXButton *doneButton;
@property (copy, nonatomic) id /* block */ rightButtonActionBlock;

- (void)didClickRightButton;
- (void)refreshWithType:(unsigned long long)a0 isEditing:(BOOL)a1 isEmptyState:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

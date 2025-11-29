@class UIImageView, UILabel, UIView;
@protocol ACCAIGCUGCFusionReferenceListFooterDelegate;

@interface ACCAIGCUGCFusionReferenceListFooterView : UIView

@property (retain, nonatomic) UIView *footerContainerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *emptyTitleLabel;
@property (weak, nonatomic) id<ACCAIGCUGCFusionReferenceListFooterDelegate> delegate;

+ (id)viewIdentifier;

- (void)updateWithTheme:(long long)a0;
- (void)updateEnabled:(BOOL)a0;
- (void)didClickedFooter;
- (void)updateToEmptyStyle;
- (void)updateToAppendStyle;
- (void)updateFooterWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

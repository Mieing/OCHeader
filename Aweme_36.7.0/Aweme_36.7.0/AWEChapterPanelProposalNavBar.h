@class UILabel;

@interface AWEChapterPanelProposalNavBar : AWEChapterPanelNavBar

@property (retain, nonatomic) UILabel *returnLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ returnAction;

- (void)configSubViews;
- (void)updateWithChapterList:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

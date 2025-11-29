@class UILabel;

@interface AWEIMTaskDetailistSectionTipsFooterView : AWEIMTaskDetailListSectionDefaultView

@property (retain, nonatomic) UILabel *tipsLabel;

- (void)renderModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end

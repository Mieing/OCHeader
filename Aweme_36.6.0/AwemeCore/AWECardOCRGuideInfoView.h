@class UIButton, AWEOCRCardItemConfig, UIScrollView, UILabel, NSMutableArray;

@interface AWECardOCRGuideInfoView : UIView

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *itemsViews;
@property (retain, nonatomic) UIButton *okButton;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } pageTransform;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) AWEOCRCardItemConfig *config;
@property (copy, nonatomic) id /* block */ completion;

- (void)hideView;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 isLandscape:(BOOL)a1 config:(id)a2 completion:(id /* block */)a3;
- (void)showGuideWithView:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupData;

@end

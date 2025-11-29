@class NSArray, AWEStoryColorChooseView, AWEStoryColor, UIView;

@interface ACCTextTypeFaceViewController : UIView

@property (retain, nonatomic) AWEStoryColorChooseView *colorChooseView;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *viweList;
@property (nonatomic, getter=isModernUI) BOOL modernUI;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ didSelectedStyleBlock;
@property (copy, nonatomic) id /* block */ didSelectedAlignmentBlock;
@property (copy, nonatomic) id /* block */ didSelectedColorBlock;
@property (readonly, nonatomic) AWEStoryColor *selectedColor;
@property (nonatomic) BOOL hasApplyTextTemplate;
@property (nonatomic) BOOL isCoverEditor;

- (void)reloadPanel;
- (void)updateWithColor:(id)a0 textStyle:(unsigned long long)a1 textAlignment:(long long)a2;
- (void)resetViewWithHeight:(double)a0;
- (void)clearPanel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isCoverEdit:(BOOL)a1 modernUI:(BOOL)a2;
- (void)selectWithColor:(id)a0;
- (id)createViewWithType:(long long)a0;
- (id)styleView;
- (id)alignmentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isCoverEdit:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)colorView;
- (void)prepareData;

@end

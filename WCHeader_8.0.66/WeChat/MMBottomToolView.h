@class NSArray, NSMutableArray, UIButton;
@protocol MMBottomToolViewDelegate;

@interface MMBottomToolView : UIImageView

@property (retain, nonatomic) NSArray *buttonConfigs;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) NSMutableArray *separators;
@property (nonatomic) struct CGSize { double width; double height; } separatorSize;
@property (nonatomic) double buttonHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) BOOL isShowChangeButton;
@property (retain, nonatomic) UIButton *changeBtn;
@property (weak, nonatomic) id<MMBottomToolViewDelegate> delegate;

- (id)initWithParentView:(id)a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 separatorSize:(struct CGSize { double x0; double x1; })a2 buttonHeight:(double)a3 buttonConfigs:(id)a4;
- (id)initWithParentView:(id)a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 separatorSize:(struct CGSize { double x0; double x1; })a2 buttonHeight:(double)a3 buttonConfigs:(id)a4 isShowChangeButton:(BOOL)a5;
- (void)initUI;
- (void)setupChangeButton;
- (void)onChangeBtnClick:(id)a0;
- (void)setupTopLine;
- (void)setupButtons;
- (void)updateButtonAtIndex:(unsigned long long)a0 withText:(id)a1;
- (void).cxx_destruct;

@end

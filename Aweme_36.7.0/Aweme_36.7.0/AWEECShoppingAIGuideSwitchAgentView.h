@class NSArray, UIImageView, NSMutableArray;

@interface AWEECShoppingAIGuideSwitchAgentView : UIView

@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) NSMutableArray *itemViewArray;
@property (copy, nonatomic) id /* block */ switchItemClickBlk;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataArray:(id)a1 bgImage:(id)a2;
- (void)renderWithDefaultSelectedIndex:(unsigned long long)a0;
- (void)configSelectedIndex:(unsigned long long)a0;
- (void)updateBGImageView:(id)a0;
- (void).cxx_destruct;
- (void)buildConstraints;

@end

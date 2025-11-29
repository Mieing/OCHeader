@class UILabel, UIButton, NSString;

@interface BDPVideoSideBarSelectItem : UICollectionViewCell

@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIButton *bgBtn;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) id /* block */ itemAction;

- (void)itemClick;
- (void)speedConfigWithValue:(id)a0 selected:(BOOL)a1;
- (void)definitionConfigWithValue:(id)a0 selected:(BOOL)a1;
- (void)configWithType:(unsigned long long)a0 value:(id)a1 selected:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end

@class UIView, NSMutableDictionary, NSMutableArray;

@interface WCFinderProfileActionButtonLayout : UIView

@property (retain, nonatomic) NSMutableDictionary *configMap;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) NSMutableDictionary *cookingBtnMap;
@property (retain, nonatomic) NSMutableDictionary *reuseMap;
@property (nonatomic) unsigned long long oldLayoutHash;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (nonatomic) double minLineHeight;
@property (nonatomic) double expandHorizontalMargin;
@property (copy, nonatomic) id /* block */ defaultConfig;
@property (retain, nonatomic) UIView *followRecommandView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)needRegister:(id)a0;
- (void)register:(id)a0 config:(id /* block */)a1;
- (void)register:(id)a0 btnCls:(Class)a1 config:(id /* block */)a2;
- (void)edit:(id /* block */)a0;
- (void)adjustFlexDefines;
- (void)layout;
- (id)btnWithTag:(id)a0;
- (id)tryGetBtnWithTag:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end

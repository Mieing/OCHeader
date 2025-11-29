@class NSArray, UIImageView, UIFont;

@interface MMFinderLiveGoodsCellSubInfosView : UIView

@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) NSArray *lines;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL isRouter;
@property (retain, nonatomic) NSArray *routerInfos;
@property (retain, nonatomic) NSArray *normalInfos;
@property (readonly, nonatomic) NSArray *infos;
@property (readonly, nonatomic) BOOL hasInfoVisible;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) id /* block */ routeAction;

+ (BOOL)willShowInWidth:(double)a0 withGoods:(id)a1 font:(id)a2;
+ (void)setRouterInfos:(id *)a0 normalInfos:(id *)a1 forAnchorWithGoods:(id)a2;
+ (BOOL)willShowInWidth:(double)a0 withRouterInfos:(id)a1 normalInfos:(id)a2 font:(id)a3;

- (void)updateForAnchorWithGoods:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)routerColor;
- (void)update;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onTaped;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end

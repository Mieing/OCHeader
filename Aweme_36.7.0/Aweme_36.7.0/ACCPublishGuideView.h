@class NSString, UILabel, UIImageView;

@interface ACCPublishGuideView : UIView

@property (retain, nonatomic) NSString *titleStr;
@property (retain, nonatomic) NSString *subTitleStr;
@property (readonly, nonatomic) UILabel *mainLabel;
@property (readonly, nonatomic) UILabel *hintLabel;
@property (readonly, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) id /* block */ dismissBlock;

+ (void)showGuideIn:(id)a0 under:(id)a1 then:(id)a2 title:(id)a3 subTitle:(id)a4 dismissBlock:(id /* block */)a5;
+ (BOOL)isViewGuidePopped:(id)a0;
+ (void)setViewGuidePopped:(id)a0;
+ (const void *)bindKey;
+ (void)showGuideIn:(id)a0 under:(id)a1 then:(id)a2 dismissBlock:(id /* block */)a3;
+ (void)showAnimationIn:(id)a0 enterFrom:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 titleStr:(id)a1 subTitleStr:(id)a2;
- (void)updateWithBottomView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissAction;
- (void)p_init;

@end

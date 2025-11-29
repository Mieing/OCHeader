@class UIColor, NSString, UIFont, UILabel;
@protocol AWERollingViewAnimateDelegate;

@interface AWERollingTextLabel : UIView <AWERollingViewProtocol>

@property (retain, nonatomic) UILabel *frontLabel;
@property (retain, nonatomic) UILabel *backLabel;
@property (copy, nonatomic) NSString *currentText;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (weak, nonatomic) id<AWERollingViewAnimateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configSubViews;
- (void)animateToText:(id)a0 type:(unsigned long long)a1 duration:(double)a2 complete:(id /* block */)a3;
- (void)animateWithText:(id)a0 duration:(double)a1 isIncrease:(BOOL)a2 complete:(id /* block */)a3;
- (void)changeToText:(id)a0 type:(unsigned long long)a1 duration:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end

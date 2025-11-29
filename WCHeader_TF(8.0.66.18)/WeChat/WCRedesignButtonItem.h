@class UIImageView, MMUILabel, NSString;

@interface WCRedesignButtonItem : WCRedesignBaseItem

@property (copy, nonatomic) id /* block */ tapHandler;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) NSString *subtitle;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)initContentView;
- (void)onLayoutContentViewSubviews;
- (void)setM_title:(id)a0;
- (void)setEnable:(BOOL)a0;
- (id)getValue;
- (void)updateAccessibility;
- (void)onTapBackground;
- (void).cxx_destruct;

@end

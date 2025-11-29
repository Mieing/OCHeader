@class NSString, MMUILabel, UIColor;

@interface WCRedesignInfoItem : WCRedesignBaseItem

@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *subtitleColor;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)initContentView;
- (void)onLayoutContentViewSubviews;
- (void)setM_title:(id)a0;
- (id)getValue;
- (void)updateSubtitle;
- (void)updateAccessibility;
- (void).cxx_destruct;

@end

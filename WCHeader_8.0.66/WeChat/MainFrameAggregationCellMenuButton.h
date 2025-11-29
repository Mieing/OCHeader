@class UIImageView, MMUILabel, NSString;

@interface MainFrameAggregationCellMenuButton : MenuButton

@property (retain, nonatomic) UIImageView *iconView;
@property (weak, nonatomic) UIImageView *animatedIconView;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (nonatomic) BOOL isInUnreadState;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconImageName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIconImageName:(id)a0 animated:(BOOL)a1;
- (void)setHasUnread:(BOOL)a0;
- (void)layoutSubviews;
- (void)onSwipeToTriggerFullfill:(BOOL)a0;
- (void).cxx_destruct;

@end

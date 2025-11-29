@class WCRedesignBaseItemView;

@interface WCRedesignBaseItem : WCBaseInfoItem

@property (retain, nonatomic) WCRedesignBaseItemView *itemView;
@property (nonatomic) unsigned int separators;
@property (nonatomic) double horizonPadding;
@property (readonly, nonatomic) double currentTitleWidth;
@property (nonatomic) double maxTitleWidth;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)setM_title:(id)a0;
- (id)titleView;
- (id)contentView;
- (id)backgroundButton;
- (void)onTapBackground;
- (void)onLayoutContentViewSubviews;
- (BOOL)shouldBreakLineForMaxContentWidth:(double)a0 itemWidth:(double)a1;
- (BOOL)isBreakLine;
- (void).cxx_destruct;

@end

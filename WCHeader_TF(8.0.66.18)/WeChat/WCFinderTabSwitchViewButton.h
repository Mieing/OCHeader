@class UIFont, WCFinderTabSwitchCustomViewInfo, UIView, NSNumber, UILabel;

@interface WCFinderTabSwitchViewButton : MMUIButton

@property (nonatomic) long long index;
@property (retain, nonatomic) NSNumber *uniqueId;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIFont *normalFont;
@property (nonatomic) double titleFontSize;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) WCFinderTabSwitchCustomViewInfo *customViewInfo;
@property (copy, nonatomic) id /* block */ customLayout;
@property (nonatomic) struct CGSize { double width; double height; } expandSize;
@property (retain, nonatomic) UILabel *redDotLabel;

- (void)setSelected:(BOOL)a0;
- (void)updateFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)updateRedDotUnreadCount:(unsigned long long)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end

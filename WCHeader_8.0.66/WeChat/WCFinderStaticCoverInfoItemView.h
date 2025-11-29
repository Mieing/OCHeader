@class WCFinderStaticCoverInfoItem, UIImageView, UILabel, UIView;

@interface WCFinderStaticCoverInfoItemView : NSObject

@property (retain, nonatomic) WCFinderStaticCoverInfoItem *item;
@property (retain, nonatomic) UILabel *labelView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *seperateView;
@property (nonatomic) BOOL showSeperate;
@property (retain, nonatomic) UIView *customView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)ensureTextLabel;
- (void)ensureIconView;
- (void)updateIconPosition:(long long)a0 container:(id)a1;
- (void)updateSeperatorPositionWithContainer:(id)a0;
- (void)setShowSeperate:(BOOL)a0 padding:(double)a1;
- (void).cxx_destruct;

@end

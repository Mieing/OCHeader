@class UIImageView, UIView;

@interface IESLiveResolutionChooseTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *customBackgroundView;
@property (nonatomic, getter=isForLandscape) BOOL forLandscape;
@property (nonatomic) BOOL isPaidResolution;
@property (retain, nonatomic) UIImageView *tagView;

- (void)p_updateColor;
- (id)customBackgroundColorForCurrentState;
- (void)p_layoutForNewStyle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)setup;
- (void)updateStyle:(BOOL)a0;

@end

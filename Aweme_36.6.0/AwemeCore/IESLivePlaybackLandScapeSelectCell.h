@class UILabel, HTSLiveGradientBackgroundView, UIView;

@interface IESLivePlaybackLandScapeSelectCell : UITableViewCell

@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *customView;

+ (id)identifier;

- (BOOL)usePadNewStyle;
- (void)updateData:(id)a0 selected:(BOOL)a1;
- (void)updateAttributedData:(id)a0 selected:(BOOL)a1;
- (void)updateWithView:(id)a0 selected:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setup;

@end

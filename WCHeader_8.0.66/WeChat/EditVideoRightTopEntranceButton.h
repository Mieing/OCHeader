@class UIImageView, UILabel;

@interface EditVideoRightTopEntranceButton : MMUIButton

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

+ (id)WeSeeEntrance;
+ (id)finderEntranceForLongVideo;
+ (id)finderEntranceForShortVideo;
+ (id)longVideoEntrance;

- (void)loadWithLogo:(id)a0 title:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end

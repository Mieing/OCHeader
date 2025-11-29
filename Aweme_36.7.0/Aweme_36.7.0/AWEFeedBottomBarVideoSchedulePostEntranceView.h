@class DUXBaseLabel, DUXBaseImageView;

@interface AWEFeedBottomBarVideoSchedulePostEntranceView : UIView

@property (retain, nonatomic) DUXBaseImageView *iconImageView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseImageView *arrowImageView;

- (void)updateWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

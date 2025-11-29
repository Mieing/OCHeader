@class UILabel, UIView;

@interface BrandSingleAuthHistoryTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIView *endLine;
@property (retain, nonatomic) UIView *spaceView;
@property (nonatomic) BOOL isEnd;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)applyRecord:(id)a0 isEnd:(BOOL)a1;
- (void)configureLayout;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)formatTime:(int)a0;
- (void).cxx_destruct;

@end

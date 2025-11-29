@class UIImageView, UILabel, UIColor;

@interface AWELiveAcqCastVideoMixListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *mixVideoCoverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) UIImageView *picoVRTagView;
@property (retain, nonatomic) UIColor *titleLabelTextColor;
@property (retain, nonatomic) UIColor *contentViewBackgroundColor;
@property (retain, nonatomic) UIColor *lineAttributesColor;
@property (nonatomic) BOOL isBGColorWhite;

- (void)updateAwemeModel:(id)a0;
- (id)minuteFormatStringWithDuration:(id)a0;
- (id)secondsFormatStringWithDuration:(id)a0;
- (id)getFormatTimeStringWithDuration:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end

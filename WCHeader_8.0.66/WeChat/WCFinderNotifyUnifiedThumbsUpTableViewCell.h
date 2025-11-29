@class UIImageView;

@interface WCFinderNotifyUnifiedThumbsUpTableViewCell : WCFinderNotifyUnifiedTableViewCell

@property (retain, nonatomic) UIImageView *thumbsUpImageView;

+ (double)getHeightWithViewModel:(id)a0 width:(double)a1;

- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)a0 width:(double)a1;
- (void).cxx_destruct;

@end

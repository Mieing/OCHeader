@class UILabel, UIView;

@interface WCFinderShieldOtherLikedFeedGuideCell : UITableViewCell

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *lineView;

+ (id)cellID;
+ (id)createLabel;
+ (double)heightWithInfo:(id)a0 width:(double)a1;

- (void)updateWithInfo:(id)a0;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void).cxx_destruct;

@end

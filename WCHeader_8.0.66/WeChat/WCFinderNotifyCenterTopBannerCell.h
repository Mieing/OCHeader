@class UIImageView, ThankRedPackageInfo, WCFinderRichTextView, UIView;

@interface WCFinderNotifyCenterTopBannerCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) WCFinderRichTextView *bannerTextView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) ThankRedPackageInfo *bannerInfo;

+ (BOOL)shouldShowWithBannerInfo:(id)a0;
+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateWithBannerInfo:(id)a0;
- (void)layoutUI;
- (void).cxx_destruct;

@end

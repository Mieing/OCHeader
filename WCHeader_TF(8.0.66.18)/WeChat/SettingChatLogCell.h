@class WXGRoamBannerView, NSString, UIImageView, UIView, MMUILabel;

@interface SettingChatLogCell : UITableViewCell <WXGRoamBannerViewDelegate>

@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *detailString;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *myBackgroundView;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) UIView *backupBannerView;
@property (retain, nonatomic) WXGRoamBannerView *bannerView;
@property (nonatomic) unsigned long long cellHeight;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight:(id)a0 maxWidth:(double)a1;
+ (double)cellMaxDetailWidth:(double)a0;
+ (double)heightForDetailLabel:(id)a0 maxWidth:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateView;
- (void)setupBannerAndCellHeight;
- (void)updateFrames;
- (void)onTapBanner;
- (void)onRoamBannerViewShow;
- (void)onRoamBannerViewHidden;
- (void).cxx_destruct;

@end

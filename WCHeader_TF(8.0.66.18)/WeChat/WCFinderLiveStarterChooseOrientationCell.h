@class WCFinderLiveSimpleVersionItem, UIImageView, MMBadgeView, WCFinderLiveStarterLiveModeSubItem, UIView, MMUILabel;

@interface WCFinderLiveStarterChooseOrientationCell : UITableViewCell

@property (retain, nonatomic) WCFinderLiveStarterLiveModeSubItem *item;
@property (retain, nonatomic) WCFinderLiveSimpleVersionItem *versionItem;
@property (nonatomic) BOOL isSelect;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *stateLabel;
@property (retain, nonatomic) UIImageView *selectStateImg;
@property (retain, nonatomic) MMBadgeView *redDotView;

+ (id)cellIdentifier;

- (void)updateItem:(id)a0;
- (void)updateVersionItem:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void).cxx_destruct;

@end

@class AWESearchSideBarRedDotManager, AWESearchProfileSideBarItemModel, NSDictionary, UILabel, DUXBaseImageView, UIView;

@interface AWESearchSideBarListItemCell : UICollectionViewCell

@property (retain, nonatomic) DUXBaseImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXBaseImageView *arrowImageView;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) AWESearchSideBarRedDotManager *redDotManager;
@property (retain, nonatomic) AWESearchProfileSideBarItemModel *itemModel;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) double showTime;
@property (copy, nonatomic) NSDictionary *logExtraDic;

+ (id)identifier;

- (void)awe_themeWillChange:(long long)a0;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)trackShow;
- (void)setupGesture;
- (void)trackClick;
- (void)onClickItem;
- (void)updateWithItemModel:(id)a0;
- (id)p_commonTrackParams;
- (void)updateRedDotCount:(unsigned long long)a0;
- (unsigned long long)p_clickDuration;
- (void)trackExtraClickEvents;
- (void)updateImageWithThemeStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end

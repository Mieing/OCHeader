@class AWESearchMusicSortTabViewCellContentView;

@interface AWESearchMusicSortTabViewCell : DUXBaseTableViewCell

@property (retain, nonatomic) AWESearchMusicSortTabViewCellContentView *infoView;

+ (id)identifier;

- (void)configUI;
- (void)configWithModel:(id)a0 vc:(id)a1;
- (long long)currentSelectedMode;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end

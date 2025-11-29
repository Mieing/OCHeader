@class UIImageView, UILabel, UIView;

@interface AFDSelectUserCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UILabel *relationLabel;
@property (retain, nonatomic) UIView *relationView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *activeDot;
@property (retain, nonatomic) UIImageView *activeDotContainer;
@property (nonatomic) BOOL isOnlineStatus;
@property (nonatomic) unsigned long long type;

+ (Class)aAWEBrandColorAdapterClass;
+ (id)identifier;

- (id)aAWEBrandColorAdapter;
- (void)updateSelected:(BOOL)a0;
- (id)relationForUser:(id)a0;
- (void)updateUIWithType:(unsigned long long)a0 viewModel:(id)a1 isSearching:(BOOL)a2;
- (void)updateUILayoutWithType:(unsigned long long)a0;
- (void)resetActiveStatus;
- (BOOL)isNewDailyPanelStatusWithType:(unsigned long long)a0;
- (void)bindViewModel:(id)a0 isSelected:(BOOL)a1 isSearching:(BOOL)a2;
- (void)bindViewModel:(id)a0 type:(unsigned long long)a1 isSelected:(BOOL)a2 isSearching:(BOOL)a3;
- (void)hiddenRelationSelectView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateActiveStatus;

@end

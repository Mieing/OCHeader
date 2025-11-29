@class UIImageView, UILabel;

@interface MMLiveGameJoinTeamSettingCoinViewCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *coin;
@property (retain, nonatomic) UILabel *valueLabel;
@property (nonatomic) unsigned int value;

+ (id)identifier;
+ (double)height;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setValue:(unsigned int)a0 isOther:(BOOL)a1;
- (void).cxx_destruct;

@end

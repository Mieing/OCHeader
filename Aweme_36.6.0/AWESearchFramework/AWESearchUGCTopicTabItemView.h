@class DUXBaseLabel, DUXBaseImageView, UIView;

@interface AWESearchUGCTopicTabItemView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXBaseImageView *icon;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) UIView *indicateView;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isSelected;

- (void)updateColorWithTheme:(unsigned long long)a0;
- (void)updateIcon:(id)a0;
- (void)p_setupUI;
- (void)toggleIsSelected:(BOOL)a0 theme:(unsigned long long)a1;
- (void)updateIconLayoutWithHasIcon:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)updateTitle:(id)a0;

@end

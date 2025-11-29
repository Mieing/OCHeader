@class UILabel, UIImageView, UIView;

@interface WCFinderLiveRosterSelectCell : MMTableViewCell

@property (retain, nonatomic) UILabel *groupName;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *checkIconView;
@property (nonatomic) long long userInterfaceStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateWithGroupName:(id)a0 isLastLine:(BOOL)a1 userInterfaceStyle:(long long)a2;
- (void)toggle;
- (void)unToggle;
- (void)disable;
- (void)isCheckIconViewChecked:(BOOL)a0;
- (id)getColorProxy;
- (void).cxx_destruct;

@end

@class UILabel, NSString, UIView;

@interface AWEPadSpeedPanelCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *panelBackgroundView;
@property (retain, nonatomic) UIView *separatorLine;
@property (copy, nonatomic) NSString *text;

- (void)updateBackgroundViewHidden:(BOOL)a0;
- (void)updateSeparatorLineHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end

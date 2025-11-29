@class UILabel, NSString, QIndoorLevel;

@interface QIndoorPickerCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSString *customFont;
@property (nonatomic) BOOL isDarkStyle;
@property (retain, nonatomic) QIndoorLevel *indoorLevel;

- (void)fillLabel;
- (void)layoutSubviews;
- (void)setupBackground;
- (void)setupLabel;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isDarkStyle:(BOOL)a2;
- (void).cxx_destruct;

@end

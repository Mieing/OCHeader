@class UIStackView, UIImageView, UILabel, DUXCheckBox;

@interface AWEIMFansSyncContactRemarkHalfScreenCell : UITableViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIStackView *nameContainer;
@property (copy, nonatomic) id /* block */ clickCheckBoxBlock;
@property (retain, nonatomic) DUXCheckBox *checkBox;

- (void)themeDidChangeNoti:(id)a0;
- (void)layoutLabelWithNickname:(id)a0 contactName:(id)a1;
- (void)addCorner:(BOOL)a0;
- (double)computeSize:(id)a0;
- (void)clickCheckBox;
- (void)configIconURL:(id)a0 nickname:(id)a1 contactName:(id)a2 hasCorner:(BOOL)a3 isChecked:(BOOL)a4 clickCheckBoxBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)setupUI;

@end

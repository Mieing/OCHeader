@class UIImageView, AWEIMmoticonThemeResponseModel, UILabel, UIButton;
@protocol AWEIMEmojiStoreTableViewCellDelegate;

@interface AWEIMEmojiStoreTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *emojiImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) AWEIMmoticonThemeResponseModel *emojiPackage;
@property (weak, nonatomic) id<AWEIMEmojiStoreTableViewCellDelegate> delegate;

- (void)__setupUIs;
- (void)trackEmojiPackageDisplayOtherInfos:(id)a0;
- (void)__refreshAddButtonUI;
- (void)__didClickAdd;
- (void)__packageDidChangeInstallStatusNotification:(id)a0;
- (void)__renderPackageData;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

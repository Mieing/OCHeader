@class AFDRoundedView, NSString, UIImageView, AWEAfterPublishAdvanceSettingSelectorCellItem, UILabel, UIView, NSIndexPath;
@protocol AWEAfterPublishAdvanceSettingCellDelegate;

@interface AWEAfterPublishAdvanceSettingSelectorCell : UITableViewCell <AWEAfterPublishAdvanceSettingCellProtocol>

@property (retain, nonatomic) AWEAfterPublishAdvanceSettingSelectorCellItem *item;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AFDRoundedView *containerView;
@property (nonatomic) BOOL needUseCardUI;
@property (nonatomic) unsigned long long cornerType;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWEAfterPublishAdvanceSettingCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ onSwitcherToggledBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupCorners;
- (void)showBottomLine:(BOOL)a0;
- (void)onCellClicked;
- (void)updateViewWithControlEnabled:(BOOL)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end

@class AFDRoundedView, NSIndexPath, UIImageView, NSString, UILabel, UIView, AWEAdvanceSettingActionItem;
@protocol AWEAdvanceSettingActionCellDelegate;

@interface AWEAdvanceSettingActionAndDescribeCell : UITableViewCell <AWEAdvanceSettingActionCellProtocol>

@property (retain, nonatomic) AWEAdvanceSettingActionItem *item;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *describeLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) AFDRoundedView *containerView;
@property (nonatomic) unsigned long long cornerType;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWEAdvanceSettingActionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)textMaxWidth;
+ (double)cellHeightWithItem:(id)a0;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupCorners;
- (void)p_setupViews;
- (void)showBottomLine:(BOOL)a0;
- (void)onCellClicked;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end

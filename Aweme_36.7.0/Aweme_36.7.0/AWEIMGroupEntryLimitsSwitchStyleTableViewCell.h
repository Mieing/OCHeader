@class AWEIMGroupEntryLimitsSwitchStyleCellModel, AWEIMCardStyleCellContainerView, TTTAttributedLabel, UILabel, UIView;
@protocol IESIMSettingSwitchProtocol, AWEIMGroupEntryLimitsSwitchStyleCellDelegate;

@interface AWEIMGroupEntryLimitsSwitchStyleTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEIMGroupEntryLimitsSwitchStyleCellModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<IESIMSettingSwitchProtocol> *aSwitch;
@property (retain, nonatomic) TTTAttributedLabel *descLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEIMCardStyleCellContainerView *containerView;
@property (nonatomic) BOOL useCardStyle;
@property (weak, nonatomic) id<AWEIMGroupEntryLimitsSwitchStyleCellDelegate> delegate;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (id)baseContentView;
- (void)__trackSwitchClickedWithStatus:(BOOL)a0;
- (void)__updateModelWithInfo:(id)a0;
- (void)__switchValueWillChange:(BOOL)a0;
- (void)configWithCellCornerType:(unsigned long long)a0 shouldShowLineAtCellBottom:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end

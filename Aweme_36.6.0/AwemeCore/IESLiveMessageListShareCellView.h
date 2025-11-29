@class UILabel, UIImageView, UIView;

@interface IESLiveMessageListShareCellView : IESLiveMessageListBaseCell

@property (retain, nonatomic) UIView *shareItemView;
@property (retain, nonatomic) UILabel *shareItemNameLabel;
@property (retain, nonatomic) UIImageView *shareItemIcon;

- (void)refreshWith:(id)a0;
- (BOOL)needLoadMessageTextLabel;
- (BOOL)onlyUseMessageTextLabel;
- (void).cxx_destruct;
- (void)setupView;

@end

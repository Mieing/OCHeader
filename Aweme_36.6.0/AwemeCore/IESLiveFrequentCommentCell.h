@class UIStackView, UIImageView, UIView, UILabel;
@protocol IESLiveFrequentCommentCellDelegate;

@interface IESLiveFrequentCommentCell : UITableViewCell

@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIStackView *textContainerView;
@property (retain, nonatomic) UIStackView *containerView;
@property (weak, nonatomic) id<IESLiveFrequentCommentCellDelegate> delegate;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *deleteIcon;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *editIcon;
@property (retain, nonatomic) UIImageView *sortBar;

- (void)disableLocalizations;
- (void)tapDeleteIcon:(id)a0;
- (void)tapEditIcon:(id)a0;
- (void)refreshViewWithState:(long long)a0;
- (void)setSortingStyle:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupViews;
- (void)createShadowView;

@end

@class IESLiveSearchSugModel, UIImageView, UILabel, UIView;
@protocol IESLiveSearchSugTableViewCellDelegate;

@interface IESLiveSearchSugTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *complementView;
@property (retain, nonatomic) UIImageView *complementInnerImageView;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) IESLiveSearchSugModel *sugModel;
@property (weak, nonatomic) id<IESLiveSearchSugTableViewCellDelegate> delegate;

+ (id)identifier;
+ (double)cellHeight;

- (void)configureUI;
- (void)didClickedComplementView:(id)a0;
- (BOOL)isNewFeedDrawStyle;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithModel:(id)a0;

@end

@class UIImageView, UILabel, UIView, AWESeachSimpleSuggestModel;
@protocol AWESeachSimpleSuggestCellDelegate;

@interface AWESeachSimpleSuggestCell : UITableViewCell

@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *complementView;
@property (retain, nonatomic) UIImageView *complementInnerImageView;
@property (retain, nonatomic) AWESeachSimpleSuggestModel *model;
@property (nonatomic) BOOL darkStyle;
@property (weak, nonatomic) id<AWESeachSimpleSuggestCellDelegate> delegate;

+ (id)identifier;
+ (double)cellHeight;

- (void)configureUI;
- (void)didClickedComplementView:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureWithModel:(id)a0;

@end

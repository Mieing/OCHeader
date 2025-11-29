@class UIImageView, UILabel, UIView, UIButton;

@interface IESLiveVisibleScopeSelectTableCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *describeLabel;
@property (copy, nonatomic) id /* block */ editBlock;

+ (id)identifier;

- (void)updateDataOfType:(unsigned long long)a0 selected:(BOOL)a1 scopeDesc:(id)a2;
- (void)updateDataOfType:(unsigned long long)a0 selected:(BOOL)a1 firstName:(id)a2 totalCount:(long long)a3;
- (void)updateDataOfType:(unsigned long long)a0 paidLiveInfo:(id)a1;
- (void)updateDataOfType:(unsigned long long)a0 selected:(BOOL)a1;
- (id)constructStringTitle:(id)a0 firstName:(id)a1 totalCount:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)editButtonTapped;
- (void)setup;

@end

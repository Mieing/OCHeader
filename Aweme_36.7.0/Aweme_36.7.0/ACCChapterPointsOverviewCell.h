@class UILabel, UIButton, UIView;

@interface ACCChapterPointsOverviewCell : UITableViewCell

@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *detailLabel;
@property (copy, nonatomic) id /* block */ editBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;

- (void)editButtonAction:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)deleteButtonAction:(id)a0;

@end

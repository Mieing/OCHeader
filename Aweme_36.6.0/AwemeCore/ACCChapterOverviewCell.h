@class UILabel, UIButton, UIView;

@interface ACCChapterOverviewCell : UITableViewCell

@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (copy, nonatomic) id /* block */ editBlock;

- (BOOL)useIntelligentChapter;
- (void)editButtonAction:(id)a0;
- (BOOL)isAsynIntelligentChapterEnable;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end

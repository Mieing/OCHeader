@class UILabel, UIButton, UIView;

@interface AWESearchSynthesisNovelCatalogCell : UITableViewCell

@property (nonatomic) unsigned long long chapterIndex;
@property (retain, nonatomic) UILabel *chapterTitleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *rightTip;

- (void)updateWithNovelChapter:(id)a0;
- (void)updateCellTipType:(long long)a0 config:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithData:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end

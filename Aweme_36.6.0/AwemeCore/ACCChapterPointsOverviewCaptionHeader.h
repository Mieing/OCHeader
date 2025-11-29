@class UILabel, UIButton, UIView;

@interface ACCChapterPointsOverviewCaptionHeader : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *abstractLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (copy, nonatomic) id /* block */ editBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;

- (void)editButtonAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)deleteButtonAction:(id)a0;

@end

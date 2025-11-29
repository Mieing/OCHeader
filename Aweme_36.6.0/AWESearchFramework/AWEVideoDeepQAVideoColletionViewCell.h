@class AWEAwemeSearchVideoAbstractSectionModel, LOTAnimationView, UILabel, YYLabel;

@interface AWEVideoDeepQAVideoColletionViewCell : UICollectionViewCell

@property (retain, nonatomic) LOTAnimationView *playingIconView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) AWEAwemeSearchVideoAbstractSectionModel *sectionModel;
@property (nonatomic) double timeLabelWidth;
@property (nonatomic) double contentLabelHeight;

+ (double)cellHeight:(id)a0;
+ (id)getConentLabelAttributedString:(id)a0;
+ (long long)getContentLabelHeight:(id)a0 sectionModel:(id)a1;
+ (id)identifier;

- (void)configUI;
- (void)updateWithModel:(id)a0 lottiePath:(id)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end

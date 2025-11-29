@class YYLabel, UILabel, AWERelatedVideoAIPlayingAnimationView;

@interface AWEFeedRVAIParseChapterViewCell : UICollectionViewCell

@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) AWERelatedVideoAIPlayingAnimationView *animationView;

+ (double)textFontSize;
+ (double)textLabelHeight;
+ (double)viewWidth:(id)a0;
+ (double)numberLabelHeight;
+ (double)viewHeight;

- (void)configUI;
- (void)updateUIWithSelected:(BOOL)a0;
- (void)updateWithChapterDesc:(id)a0 time:(id)a1 number:(long long)a2;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)timeFontSize;

@end

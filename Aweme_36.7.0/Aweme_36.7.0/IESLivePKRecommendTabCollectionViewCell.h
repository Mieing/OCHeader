@class UILabel, NSString, UIView;

@interface IESLivePKRecommendTabCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *activityID;
@property (nonatomic) int type;

- (BOOL)isListOpt;
- (void)changeStyleWithPanelType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)setTitleLabelText:(id)a0;

@end

@class UILabel, UIView;

@interface CSJDislikeNewSignalCell : CSJDislikeNewBaseCell

@property (retain, nonatomic) UILabel *wordLabel;
@property (retain, nonatomic) UIView *sepView;

- (void)refreshWithDislikeWordsViewModel:(id)a0;
- (void)setDarkStyle;
- (void)setLightStyle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end

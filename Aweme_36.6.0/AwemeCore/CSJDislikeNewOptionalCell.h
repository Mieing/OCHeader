@class UILabel, UIView, CSJDislikeWordsViewModel;
@protocol CSJDislikeNewOptionalCellDelegate;

@interface CSJDislikeNewOptionalCell : CSJDislikeNewBaseCell

@property (retain, nonatomic) CSJDislikeWordsViewModel *dislikeWordsViewModel;
@property (retain, nonatomic) UILabel *wordLabel;
@property (retain, nonatomic) UIView *optionView;
@property (retain, nonatomic) UIView *sepView;
@property (weak, nonatomic) id<CSJDislikeNewOptionalCellDelegate> delegate;

- (void)refreshWithDislikeWordsViewModel:(id)a0;
- (void)setDarkStyle;
- (void)setLightStyle;
- (void)itemLabelAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end

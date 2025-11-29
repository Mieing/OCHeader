@class UIButton;

@interface AWEAICreateEffectsCreateKeyWordsView : UIView

@property (retain, nonatomic) UIButton *addkeywordButton;
@property (copy, nonatomic) id /* block */ clickAddKeywordBlock;

- (void)onaddkeywordButtonClicked:(id)a0;
- (void)updateAddKeywordsStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

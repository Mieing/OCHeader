@class AWEIMEmoticonSearchPanelHotWordView;

@interface AWEIMEmoticonSearchHotWordHeaderView : UICollectionReusableView

@property (retain, nonatomic) AWEIMEmoticonSearchPanelHotWordView *hotWordView;
@property (copy, nonatomic) id /* block */ didSelectHotWordBlock;

+ (struct CGSize { double x0; double x1; })preferedSize;

- (void)trackTagShow;
- (void)renderWithConfig:(id)a0;
- (id)composeRecommendWordsWithConfig:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

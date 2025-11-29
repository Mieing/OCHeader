@class NSMutableArray, NSMutableDictionary, MASViewAttribute, UIView, IESLLGDCommonContentComponentViewModel, IESLLGDCommonContentVOModel;

@interface IESLLGDCommonContentComponentView : LLDitoComponentView

@property (weak, nonatomic) IESLLGDCommonContentComponentViewModel *viewModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *fullScreenContentView;
@property (retain, nonatomic) UIView *popupContentView;
@property (retain, nonatomic) MASViewAttribute *contentBottom;
@property (nonatomic) double preMarginBottom;
@property (retain, nonatomic) IESLLGDCommonContentVOModel *componentVO;
@property (retain, nonatomic) NSMutableDictionary *textSizeCache;
@property (nonatomic) double preRatio;
@property (nonatomic) int willShowIndex;
@property (retain, nonatomic) NSMutableArray *showingViewList;
@property (retain, nonatomic) NSMutableArray *showingViewModelList;

- (void)updateViewModel:(id)a0;
- (id)addFullScreenTextView:(id)a0;
- (id)getVOByType:(id)a0;
- (id)getPopupTextView:(id)a0;
- (struct CGSize { double x0; double x1; })getTextViewSizeWithTextVO:(id)a0;
- (void)updateLayoutWithRatio:(double)a0;
- (void)updateCardHeight;
- (struct CGSize { double x0; double x1; })getTextSize:(id)a0;
- (void)handleTouchMove:(double)a0 originDistance:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end

@class IESLLPOIDetailNGModalViewBar;

@interface IESLLPOIDetailNGModalViewBarViewModel : LLDitoComponentViewModel

@property (nonatomic) BOOL shouldHide;
@property (nonatomic) BOOL isContainerMaxUnfold;
@property (nonatomic) BOOL isInUnfoldCollapse;
@property (weak, nonatomic) IESLLPOIDetailNGModalViewBar *componentView;

- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)halfContainerMaxUnfoldState:(BOOL)a0 isInUnfoldCollapse:(BOOL)a1;
- (void)halfContainerEndPullCollapse:(double)a0 isCollapsed:(BOOL)a1 duration:(double)a2;
- (void)vsdContainer:(id)a0 offsetChange:(double)a1;
- (void)updateStatusInMaxUnfold;
- (void)changeAlphaWithOffset:(double)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end

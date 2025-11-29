@class NSArray;

@interface ACCTemplateTextStickerBorderViewList : NSObject

@property (retain, nonatomic) NSArray *textTemplateBorderViewList;

- (void)activeSubViewAtIndex:(long long)a0;
- (void)deactivateSubView;
- (void)bringtSubviewToBottomWithIndex:(unsigned long long)a0;
- (void)updateBorderBasicLineWidthWithScale:(double)a0;
- (void)updateBorderLineWidthWithScale:(double)a0;
- (id)initWithSizeDic:(id)a0 positionDic:(id)a1 rotationDic:(id)a2 scale:(double)a3;
- (id)setupBorderViewWithSizeDic:(id)a0 positionDic:(id)a1 rotationDic:(id)a2 scale:(double)a3;
- (id)initWithSizeDic:(id)a0 positionDic:(id)a1 scale:(double)a2;
- (void)setUpBorderViewsEditBlock:(id /* block */)a0;
- (void)updateBorderViewsEditBlockIfNeeded:(id /* block */)a0;
- (void)setHiddenBorderViews:(BOOL)a0;
- (void)updateBorderViewSize:(struct CGSize { double x0; double x1; })a0 index:(long long)a1;
- (void)updateBorderViewCenterPosition:(struct CGPoint { double x0; double x1; })a0 index:(long long)a1;
- (void)addBorderViewsTo:(id)a0;
- (void)removeBorderViews;
- (void).cxx_destruct;

@end

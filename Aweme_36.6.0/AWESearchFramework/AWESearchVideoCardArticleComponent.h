@class AWEGeneralSearchVideoCardModel, AWESearchVideoCardArticleComponentView;

@interface AWESearchVideoCardArticleComponent : AWESearchComponent

@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (retain, nonatomic) AWESearchVideoCardArticleComponentView *contentView;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (id)viewModelFromModel:(id)a0;

- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)componentView;

@end

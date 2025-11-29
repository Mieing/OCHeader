@class BDXCategoryIndicatorLineView;

@interface BDXPageIndicatorView : BDXPageBaseView

@property (retain, nonatomic) BDXCategoryIndicatorLineView *indicatorLineView;

- (id)preferredCategoryView;
- (id)myCategoryView;
- (void)hideIndicatorLine:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setTitles:(id)a0;

@end

@class UIImageView;

@interface AWEDanmakuItemAuthorView : AWEDanmakuItemCommonView

@property (retain, nonatomic) UIImageView *authorImage;

- (void)updateWithDescriptor:(id)a0;
- (void)updateDanmaKuUnitView;
- (double)obtainContentLabelX;
- (void)setupAuthorImageView;
- (void)updateAuthorImageLayOut;
- (void)addSubViews;
- (void).cxx_destruct;

@end

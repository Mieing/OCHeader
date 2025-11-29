@class UIImageView, AWEGradientView;

@interface AWEDanmakuItemGuideView : AWEDanmakuItemCommonView

@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UIImageView *prefixImage;

- (void)updateWithDescriptor:(id)a0;
- (void)updateDanmaKuUnitView;
- (id)initWithItemViewType:(id)a0;
- (double)obtainContentLabelX;
- (void)setupPrefixImageView;
- (void)updateDanmakuPrefixImageViewLayout;
- (void)configBottomGradientViewColorIfNeed;
- (void)addSubViews;
- (void).cxx_destruct;

@end

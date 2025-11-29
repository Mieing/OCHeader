@class UIImageView;

@interface AWEDanmakuItemActivityView : AWEDanmakuItemCommonView

@property (retain, nonatomic) UIImageView *prefixImage;

- (void)updateWithDescriptor:(id)a0;
- (void)updateDanmaKuUnitView;
- (void)updateDanmakuPrefixImageViewLayOut;
- (double)obtainContentLabelX;
- (double)obtainOwnerBorderRightOffset;
- (void)addSubViews;
- (void).cxx_destruct;

@end

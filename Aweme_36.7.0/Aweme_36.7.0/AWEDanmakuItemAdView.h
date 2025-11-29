@class UIImageView;

@interface AWEDanmakuItemAdView : AWEDanmakuItemCommonView

@property (retain, nonatomic) UIImageView *prefixImage;

- (void)updateWithDescriptor:(id)a0;
- (void)updateDanmaKuUnitView;
- (void)updateDanmakuPrefixImageViewLayOut;
- (double)obtainContentLabelX;
- (double)obtainOwnerBorderRightOffset;
- (double)preImageImageWidth;
- (void)addSubViews;
- (void).cxx_destruct;

@end

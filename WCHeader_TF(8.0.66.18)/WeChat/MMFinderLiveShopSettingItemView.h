@class NSNumber, MMUILabel, UIView;

@interface MMFinderLiveShopSettingItemView : UIView

@property (retain, nonatomic) UIView *highLightShadowView;
@property (retain, nonatomic) UIView *titlePreLineView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) NSNumber *customLabelLeft;
@property (retain, nonatomic) NSNumber *customDetailLabelWidth;
@property (nonatomic) BOOL enableDarkmode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleLabelFontSize:(double)a0;
- (void)setDetailLabelFontSize:(double)a0;
- (void)layoutSubviews;
- (void)addLayoutObserveFor:(id)a0 keyPaths:(id)a1;
- (void).cxx_destruct;

@end

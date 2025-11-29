@class MMLiveColorfulLabel, UILabel, UIView;

@interface MMLiveStatisticsItemView : UIView

@property (retain, nonatomic) MMLiveColorfulLabel *header;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) MMLiveColorfulLabel *content;
@property (retain, nonatomic) UILabel *caption;
@property (nonatomic) unsigned long long contentSemantic;

+ (id)labelGradientColorsForMonumentTier:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableFontScaling:(BOOL)a1;
- (id)initWithGenericStatisticsItem:(id)a0 enableFontScaling:(BOOL)a1;
- (id)initWithHighlightedStatisticsItem:(id)a0 enableFontScaling:(BOOL)a1;
- (id)initWithMonumentalStatisticsItem:(id)a0 enableFontScaling:(BOOL)a1;
- (id)initWithMonumentalStatisticsItem:(id)a0 coalescedCount:(unsigned long long)a1 enableFontScaling:(BOOL)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)initializeComponentsWithFontScaling:(BOOL)a0;
- (id)systemFontOfSize:(double)a0 weight:(double)a1 withScaling:(BOOL)a2;
- (id)mediumWechatStdFontOfSize:(double)a0 withScaling:(BOOL)a1;
- (void).cxx_destruct;

@end

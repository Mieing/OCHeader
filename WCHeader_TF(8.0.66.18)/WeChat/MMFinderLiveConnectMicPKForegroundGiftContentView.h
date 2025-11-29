@class PAGView, RfxPagView;

@interface MMFinderLiveConnectMicPKForegroundGiftContentView : UIView

@property (nonatomic) double widthHeightRatio;
@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) RfxPagView *rfxPAGView;
@property (nonatomic) double heightPercent;

- (id)initWithPAGFile:(id)a0;
- (id)initWithRfxPAGFile:(id)a0;
- (void)commonInitWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getPAGView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

@class NSString, AWEVisitFrequentUserVideoListIndicatorSliderConfig, UIView;

@interface AWEVisitFrequentUserVideoListIndicatorSlideBarView : UIView <AWEVisitFrequentUserVideoListIndicatorProtocol>

@property (retain, nonatomic) UIView *cursorView;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) unsigned long long numberOfIndicator;
@property (retain, nonatomic) AWEVisitFrequentUserVideoListIndicatorSliderConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)moveIndicatorToIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)moveIndicatorToIndex:(unsigned long long)a0;
- (id)initWithSliderConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sliderConfig:(id)a1;
- (void)configUIComponents;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@class NSArray, NSString;

@interface AWETeenLongPressPanelSpeedViewModel : AWETeenLongPressPanelBaseViewModel <AWETeenLongPressPanelSegmentViewDelegate>

@property (copy, nonatomic) NSArray *playbackRateTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configVM;
- (struct CGSize { double x0; double x1; })subViewSize;
- (id)speedItem;
- (void)speedChangeToastShow:(long long)a0;
- (void)longPressPanelSegementViewDidClick:(id)a0 index:(long long)a1;
- (double)longPressPanelSegementTitleLabelFontSize:(id)a0;
- (struct CGSize { double x0; double x1; })longPressPanelSegementAnimationViewSize:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

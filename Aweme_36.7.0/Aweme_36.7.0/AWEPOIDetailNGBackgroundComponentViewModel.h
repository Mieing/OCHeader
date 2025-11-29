@class AWEPOIDetailHeaderImageComponentBaseView, AWEPOIOffset;

@interface AWEPOIDetailNGBackgroundComponentViewModel : DitoComponentViewModel

@property (nonatomic) BOOL hasTracked;
@property (retain, nonatomic) AWEPOIOffset *headImageStartOffset;
@property (nonatomic) BOOL showLynxView;
@property (nonatomic) BOOL showHeaderView;
@property (weak, nonatomic) AWEPOIDetailHeaderImageComponentBaseView *componentView;
@property (nonatomic) double headerImageHeight;
@property (nonatomic) long long backgroundOption;
@property (nonatomic) BOOL disableTracker;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didLoadPageModel:(id)a0;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)vsdContainer:(id)a0 offsetChange:(double)a1;
- (void)buildBackgroundImageOffsetIfNeed;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end

@class WCPIPAudioOnlyIndicatorDescription;

@interface MMFinderLiveAudioOnlyIndicatorWidgetObj : MMFinderLiveStateTextWidgetObj

@property (retain, nonatomic) WCPIPAudioOnlyIndicatorDescription *indicatorDescription;

- (id)initWithIndicatorDescription:(id)a0 businessId:(id)a1;
- (id)getSnapshotUserBackImage;
- (double)titleTextTop;
- (struct CGSize { double x0; double x1; })getMainVideoViewSize;
- (id)getCompositedLeftIconImage:(id)a0 rightIconImage:(id)a1 withMaskImage:(id)a2;
- (double)leftRightIconImageCenterPercent;
- (void).cxx_destruct;

@end

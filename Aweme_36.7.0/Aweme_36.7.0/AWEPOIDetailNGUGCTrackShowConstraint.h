@protocol DitoComponentViewModel;

@interface AWEPOIDetailNGUGCTrackShowConstraint : NSObject

@property (weak, nonatomic) id<DitoComponentViewModel> viewModel;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) BOOL isLimiting;
@property (copy, nonatomic) id /* block */ didModalViewCompleteShow;

- (void)didHalfConainerStateChangeToFullScreen;
- (void)removeScrollLimit;
- (void)willShowWithTrackBlock:(id /* block */)a0;
- (void)didCompleteShowWithTrackBlock:(id /* block */)a0;
- (void)reportRecordedTrackShow;
- (void)trackShowIfDidSlideUpWithBlock:(id /* block */)a0;
- (id)didSlideUpKey;
- (id)didShowButNotTrackListKey;
- (id)prefix;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)context;
- (void)didScroll:(id)a0;

@end

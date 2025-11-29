@class BrandTimelineViewController;

@interface BrandTimelineResortLogic : NSObject

@property (nonatomic) BOOL hasTryResort;
@property (weak, nonatomic) BrandTimelineViewController *timelineVC;

- (void)tryResortOnEnterTimeline;
- (id)getResortContext:(id)a0;
- (id)genResortCommItemFromExposeInfo:(id)a0;
- (void).cxx_destruct;

@end

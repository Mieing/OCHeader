@interface AWEECommerceQualityMonitor : NSObject

+ (id)sharedInstance;

- (void)trackGoodsPageDurationTrackEvent:(id)a0;
- (id)createPageDurationTrackEventWithPageID:(id)a0 extra:(id)a1;
- (void)updatePageRenderDurationEvent:(id)a0;
- (void)updatePageInteractDurationAndTrackEvent:(id)a0;
- (void)trackGoodsAPIFeedbackEvent:(id)a0;

@end

@class NSString, AWEFeedProgressContext;

@interface AWEFeedProgressTrackerService : NSObject <AWEFeedProgressTrackerProtocol>

@property (weak, nonatomic) AWEFeedProgressContext *progressContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 withParams:(id)a1;
- (void)trackRequestThumbnailWithModel:(id)a0;
- (void)trackGetProgressThumbnailWithModel:(id)a0 error:(id)a1 duration:(long long)a2;
- (void)trackErrorThumbnailWithModel:(id)a0 withParams:(id)a1;
- (void)trackShowThumbnailWithModel:(id)a0;
- (id)getCommonTrackParamsWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

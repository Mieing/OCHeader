@interface AWEShowPlayletRelatedPanelRegister : AWERelatedPanelRegisterBaseStrategy

+ (id)elementClassArray;
+ (BOOL)shouldActiveWithAwemeModel:(id)a0;
+ (long long)configType;

- (BOOL)dcFeed:(id)a0 handleRouterEventWithType:(unsigned long long)a1 awemeModel:(id)a2;
- (Class)dcFeedCustomCell:(id)a0 context:(id)a1;
- (id)dcFeedFeedClientShowTrackParams:(id)a0;
- (id)dcFeedFeedClientClickTrackParams:(id)a0;
- (id)customTopBarTitleWithModel:(id)a0;
- (id)dcFeedCustomTrackParams:(id)a0 event:(id)a1;
- (id)businessDataController;
- (id)showTrackWithDictionary:(id)a0;
- (id)showTrackerParams;

@end

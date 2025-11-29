@interface AWELivePreStreamRelatedPanelRegister : AWERelatedPanelRegisterBaseStrategy

+ (id)elementClassArray;
+ (BOOL)shouldActiveWithAwemeModel:(id)a0;
+ (long long)configType;

- (long long)workingRangeSize;
- (id)recommendPageReferString;
- (id)dcFeedCommonTrackParamsWithModel:(id)a0;
- (id)dcFeedAutoPlayConfig;
- (BOOL)dcFeedClientShouldShowDislikeVC;
- (Class)dcFeedCustomCell:(id)a0 context:(id)a1;
- (id)dcFeedCustomTrackParams:(id)a0 event:(id)a1;
- (id)businessDataController;
- (id)currentPanelPublicWithModel:(id)a0;

@end

@class NSString;

@interface AWERelatedPanelRegisterBaseStrategy : NSObject <AWERelatedPanelRegisterBaseStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementClassArray;
+ (BOOL)shouldActiveWithAwemeModel:(id)a0;
+ (long long)configType;

- (long long)workingRangeSize;
- (id)recommendPageReferString;
- (id)dcFeedCommonTrackParamsWithModel:(id)a0;
- (id)dcFeedAutoPlayConfig;
- (BOOL)dcFeedClientShouldShowDislikeVC;
- (BOOL)dcFeed:(id)a0 handleRouterEventWithType:(unsigned long long)a1 awemeModel:(id)a2;
- (Class)dcFeedCustomCell:(id)a0 context:(id)a1;
- (id)dcFeedFeedClientShowTrackParams:(id)a0;
- (id)dcFeedFeedClientClickTrackParams:(id)a0;
- (id)customTopBarTitleWithModel:(id)a0;
- (id)dcFeedCustomTrackParams:(id)a0 event:(id)a1;
- (id)businessDataController;
- (id)businessInnerDataController;

@end

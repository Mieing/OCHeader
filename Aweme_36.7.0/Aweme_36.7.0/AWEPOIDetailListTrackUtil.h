@class DitoGeneralContainerPageContext, DitoPageModel, NSString;
@protocol AWEPOIDetailListUtilProtocol, AWEPOIUGCRateContextProtocol;

@interface AWEPOIDetailListTrackUtil : NSObject <AWEPOIDetailListTrackUtilProtocol>

@property (weak, nonatomic) DitoPageModel *pageModel;
@property (nonatomic) BOOL didTrackShowUgcRateListPage;
@property (nonatomic) BOOL didTrackFirstFeed;
@property (nonatomic) long long totalCommentShowCount;
@property (nonatomic) long long goodCommentShowCnt;
@property (nonatomic) long long badCommentShowCnt;
@property (nonatomic) long long picCommentShowCnt;
@property (nonatomic) long long richTextCommentShowCnt;
@property (nonatomic) long long detailedCommentShowCnt;
@property (weak, nonatomic) DitoGeneralContainerPageContext<AWEPOIUGCRateContextProtocol> *context;
@property (nonatomic) BOOL isFromIsolated;
@property (weak, nonatomic) id<AWEPOIDetailListUtilProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (void)firstFeedDidFinishWithPOILogParams:(id)a0;
- (id)paramsForUgcRateUserPageEntrance;
- (void)trackLastPageCountIsEqual;
- (long long)UGCListCount;
- (BOOL)hasCOIList;
- (id)ugcGroupTagName;
- (void)forEachWithGroupTagName:(id)a0 block:(id /* block */)a1;
- (id)createFirstFeedLogParams;
- (id)ugcCommonTrackParams;
- (id)poiSessionCommonParams;
- (id)extraParamsForLynx:(id)a0;
- (void)recordCountWithUGCItem:(id)a0;
- (void)trackShowUgcRateListPageEvent;
- (void)trackSlideOnPoiUgcAreaEvent;
- (void).cxx_destruct;
- (id)headerModel;

@end

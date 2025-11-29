@class NSString;
@protocol AWESearchSingleTapEnterDetailProtocol;

@interface AWESearchSingleTapEnterDetailHandler : NSObject <AWEAwemeDetailTableViewControllerDelegate, AWESearchSingleTapEnterDetailHandlerProtocol>

@property (weak, nonatomic) id<AWESearchSingleTapEnterDetailProtocol> contanerVC;
@property (copy, nonatomic) id /* block */ willDelteBlock;
@property (copy, nonatomic) id /* block */ delteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (id)detailVCWithInitialIndex:(long long)a0 withExtra:(id)a1;
- (id)detailVCWithInitialIndex:(long long)a0;
- (BOOL)syncGetSearchInnerFeedBackOptimizeV2;
- (void)singleTapEnterDetail:(long long)a0 withExtra:(id)a1 withPlayer:(id)a2;
- (BOOL)shouldUseModernFullScreenTransitionForAweme:(id)a0;
- (id)searchDetailLogExtraDictWithExtra:(id)a0;
- (void)singleTapEnterDetail:(long long)a0;
- (BOOL)fixSearchTrackMap;
- (BOOL)hasDuplicateItem:(id)a0;
- (BOOL)isCurrentItemIndoubleColumn:(id)a0;
- (id)ecomSceneIdParamsForLiveRoomWithEnterMethod:(id)a0;
- (id)getBCMParamsWithSearchParams:(id)a0;
- (id)setInnerVCWillDeleteBlock:(id)a0;
- (id)setInnerVCDeleteBlock:(id)a0;
- (void)singleTapEnterDetailWithExtra:(id)a0 withPlayer:(id)a1 index:(long long)a2;
- (BOOL)pushToPlayletInnerFeed:(id)a0;
- (id)detailVCWithNewDatasource:(id)a0 withExtra:(id)a1 alaSrc:(id)a2 searchResultID:(id)a3 pitayaSceneArray:(id)a4;
- (id)getExtraParamsDictionaryForInnerStream;
- (void)attachInnerFlowContextForDataController:(id)a0 awemeModel:(id)a1;
- (id)detailLiveInnerVCWithNewDatasource:(id)a0 withExtra:(id)a1 alaSrc:(id)a2 searchResultID:(id)a3 docType:(long long)a4;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;

@end

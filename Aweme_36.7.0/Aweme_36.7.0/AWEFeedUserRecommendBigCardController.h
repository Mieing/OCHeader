@class NSString, NSMutableDictionary, NSObject;
@protocol AWEFeedShareReflowCardAndVideoManagerProtocol;

@interface AWEFeedUserRecommendBigCardController : AWEFeedFetchInsertBaseCardController <AWEFeedShareReflowCardAndVideoDelegate>

@property (retain, nonatomic) NSObject<AWEFeedShareReflowCardAndVideoManagerProtocol> *shareReflowManager;
@property (retain, nonatomic) NSMutableDictionary *processModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cardWillDisplay:(id)a0 withAweme:(id)a1;
- (BOOL)shouldCancelInsertCard:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 willInsertForRowAtIndexPath:(id)a3;
- (id)trackParamsWithBusinessInfo:(id)a0;
- (void)clickShareReflowAlertOpenButton:(id)a0;
- (void)finishRequestAwemeItemInDetailVC:(id)a0;
- (void)videoDisappear:(id)a0;
- (void)showShareReflowAlert:(id)a0;
- (void)fetchShareReflowCard:(id)a0;
- (void)trackShareCardFilter:(id)a0;
- (void)insertShareReflowCardToListIfNeeded:(id)a0 delta:(long long)a1 completion:(id /* block */)a2;
- (id)transferInfoModelToUserModel:(id)a0;
- (void)trackTokenFindReturnWithAwemeID:(id)a0 enterMethod:(id)a1;
- (BOOL)isVideoBelongToShareReflow:(id)a0;
- (void)insertShareReflowVideo:(id)a0 completion:(id /* block */)a1;
- (id)transferInfoModelToAwemeList:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end

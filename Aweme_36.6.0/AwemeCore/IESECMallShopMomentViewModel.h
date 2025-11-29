@class IESECMallShopMomentListModel, IESECMallShopMomentContext, NSString, UIView, NSMutableDictionary, NSDictionary, NSMutableSet, IESECListKitBFFViewController, IESECMallShopMomentDataController;

@interface IESECMallShopMomentViewModel : NSObject

@property (nonatomic) BOOL isFirstScreen;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) IESECMallShopMomentContext *context;
@property (retain, nonatomic) IESECMallShopMomentListModel *listModel;
@property (retain, nonatomic) NSMutableDictionary *playerPositionMap;
@property (retain, nonatomic) IESECMallShopMomentDataController *dataController;
@property (retain, nonatomic) NSMutableDictionary *curPlayerMap;
@property (copy, nonatomic) NSString *referString;
@property (readonly, nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSString *lastPlayItemID;
@property (weak, nonatomic) IESECListKitBFFViewController *listVC;
@property (weak, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *feedback;
@property (readonly, copy, nonatomic) NSString *envIdentifier;
@property (retain, nonatomic) NSMutableSet *skipItems;
@property (nonatomic) double curOffsetY;

- (id)bid;
- (void)updateGlobalProps:(id)a0;
- (id)checkResponse:(id)a0;
- (void)setupGlobalProps;
- (void)publishEventName:(id)a0 params:(id)a1;
- (void)sendRefreshEventWithStatus:(id)a0;
- (void)insertCustomDataToItemData:(id)a0;
- (void)clearPlayControl;
- (void)tryToPlayVisibleCell;
- (void)updateRequestParamsWithResponse:(id)a0;
- (id)getCardUIConfigWithItemID:(id)a0;
- (void)loadMoreWithExtraParams:(id)a0;
- (void)initFetchWithExtraParams:(id)a0;
- (BOOL)loadFirstScreenData;
- (void)loadFirstScreenDataFromFE:(id)a0;
- (id)getLiveSkylightCard;
- (id)getSectionViewModelAtSection:(long long)a0;
- (void)saveElementPositionWithItemData:(id)a0 rootView:(id)a1;
- (void)storageIfNeeded;
- (void)reportNetMetrics:(id)a0;
- (id)requestExtraParams:(id)a0;
- (id)getCardUIConfigWithItemID:(id)a0 index:(long long)a1 isLastCard:(BOOL)a2 itemData:(id)a3 nextItemData:(id)a4;
- (id)getPlayerNameWithItemType:(unsigned long long)a0;
- (void)tryToPlayVisibleCellForSingle;
- (void)tryToPlayVisibleCellForDoubleColumn;
- (id)getVisibleSectionControllerWithSectionID:(id)a0;
- (id)getSectionModelWithSectionID:(id)a0;
- (BOOL)isMediaCard:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

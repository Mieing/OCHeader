@class NSString, AWEAwemeModel;
@protocol AWEDCardBaseManagerProtocol;

@interface AWEDCardNearbyCollectCardManager : NSObject <AWEDCardBizManagerProtocol>

@property (retain, nonatomic) AWEAwemeModel *lastCollectionCard;
@property (nonatomic) BOOL hasShownCard;
@property (nonatomic) BOOL hasInsertedCard;
@property (weak, nonatomic) id<AWEDCardBaseManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willDeleteDCard:(id)a0;
- (void)willDisplayDCard:(id)a0;
- (BOOL)checkIfCanInsertDCard:(id)a0;
- (void)didInsertDCard:(id)a0 targetIndex:(long long)a1 totalFeedCount:(long long)a2;
- (id)managerScene;
- (void).cxx_destruct;

@end

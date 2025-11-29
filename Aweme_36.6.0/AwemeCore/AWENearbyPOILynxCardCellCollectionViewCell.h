@protocol AWEPOINearbyLynxCardManager;

@interface AWENearbyPOILynxCardCellCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) id<AWEPOINearbyLynxCardManager> lynxCardManager;
@property (nonatomic) long long cardType;
@property (nonatomic) long long indexToInsert;

- (void)configWithModel:(id)a0 extraParams:(id)a1;
- (void)broadcastEventWithEventType:(long long)a0;
- (void).cxx_destruct;

@end

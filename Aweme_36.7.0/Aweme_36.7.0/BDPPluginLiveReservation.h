@class NSString, BDPUniqueID, BDPFloatingViewCard;

@interface BDPPluginLiveReservation : BDPBridgeInstancePlugin

@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *componentId;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFloatingViewCard *floatingCard;

- (id)findExistedCardInSubviews:(id)a0 componentId:(id)a1;
- (id)generateLiveReservationCardInfoWithPageID:(long long)a0 bookingID:(id)a1 componentId:(id)a2 param:(id)a3 liveReservationCard:(id)a4;
- (void)insertFloatingViewWithContainer:(id)a0 completion:(id /* block */)a1;
- (void)removeFloatingViewWithcompletion:(id /* block */)a0;
- (void)insertAwemeLiveBookWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateAwemeLiveBookWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeAwemeLiveBookWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (BOOL)pageContainsFloatingViewWithController:(id)a0;
- (void).cxx_destruct;

@end

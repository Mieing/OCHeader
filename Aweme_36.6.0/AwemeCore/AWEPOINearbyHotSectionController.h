@class NSDictionary, NSString, AWEWaterFallSectionCollectionContext;

@interface AWEPOINearbyHotSectionController : NSObject <AWEWaterFallSectionControllerProtocol>

@property (nonatomic) long long entranceIndex;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *referStr;
@property (retain, nonatomic) AWEWaterFallSectionCollectionContext *collectionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)rx_store:(id)a0 didSetWithModule:(id)a1;
- (id)feedList;
- (double)minimumColumnSpacing;
- (void)p_bindStateAndAction;
- (id)items;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0;
- (id)init;
- (id)store;
- (void)scrollViewDidScroll:(id)a0;
- (double)minimumInteritemSpacing;
- (void)didSelectItem:(id)a0;
- (id)cellForItem:(id)a0;
- (void)willDisplayItem:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end

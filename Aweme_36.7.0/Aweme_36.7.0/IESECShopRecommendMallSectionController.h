@class NSString, IESECShopRecommendMallObject, IESECCollectionViewSectionLayout;

@interface IESECShopRecommendMallSectionController : IGListSectionController <IESECCollectionViewSectionLayoutProtocol> {
    IESECShopRecommendMallObject *_object;
}

@property (retain, nonatomic) IESECCollectionViewSectionLayout *sectionLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)productTrackParams;
- (void)mallTrack:(id)a0;
- (void)jumpToMall:(id)a0 btmToken:(id)a1;
- (void)mallTrack:(id)a0 isButton:(BOOL)a1;
- (void)productTrack:(id)a0 event:(id)a1 cell:(id)a2 once:(BOOL)a3 jump:(BOOL)a4 host:(id)a5;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end

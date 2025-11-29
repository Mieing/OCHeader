@class ECProductCardViewModel, NSMutableDictionary, NSString;

@interface WCFinderProfileStoreProductCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) NSMutableDictionary *viewMap;
@property (retain, nonatomic) ECProductCardViewModel *viewDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;
+ (id)elementsForCardVM:(id)a0;

@end

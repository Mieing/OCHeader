@class NSMutableSet;
@protocol IESECShopProductsExposureTrackerDataSource;

@interface IESECShopProductsExposureTracker : NSObject {
    NSMutableSet *_exposedIDs;
}

@property (weak, nonatomic) id<IESECShopProductsExposureTrackerDataSource> dataSource;

- (void)addProductID:(id)a0;
- (id)unexposedProductIDs;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end

@class IESGCPSKCombined, IESGCPSKReserve, IESGCPSKStoreProduct, IESGCPSKCommercialAttribution, NSString, IESGCPSKDataConnection;

@interface IESGCPStoreKit : NSObject <IESGCPStoreKitInterface>

@property (retain, nonatomic) IESGCPSKStoreProduct *storeProduct;
@property (retain, nonatomic) IESGCPSKCommercialAttribution *commercialAttribution;
@property (retain, nonatomic) IESGCPSKCombined *combined;
@property (retain, nonatomic) IESGCPSKDataConnection *dataConnection;
@property (retain, nonatomic) IESGCPSKReserve *reserve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)attributionInterface;
- (id)dataConnectionInterface;
- (id)combinedInterface;
- (id)storeProductInterface;
- (id)reserveInterface;
- (void).cxx_destruct;

@end

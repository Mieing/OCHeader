@class NSString, NSNumber, AWEPOIMapStoreGuideInfo;

@interface AWEMapPOIInfoModel : NSObject

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *poiAddress;
@property (copy, nonatomic) NSString *cityCode;
@property (retain, nonatomic) NSNumber *longitudeGCJ;
@property (retain, nonatomic) NSNumber *latitudeGCJ;
@property (nonatomic) BOOL isLocal;
@property (retain, nonatomic) AWEPOIMapStoreGuideInfo *storeGuideInfo;

- (void).cxx_destruct;

@end

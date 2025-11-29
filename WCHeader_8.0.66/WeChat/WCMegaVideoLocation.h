@class NSString;

@interface WCMegaVideoLocation : NSObject <WCTColumnCoding, PBCoding>

@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiAddress;
@property (copy, nonatomic) NSString *poiClassifyId;
@property (nonatomic) unsigned long long poiClassifyType;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *country;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_poiAddress;
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_poiClassifyType;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_region;
+ (void)PBArrayAdd_country;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMegaVideoLocation:(id)a0;
- (id)genMegaVideoLocation;
- (void).cxx_destruct;

@end

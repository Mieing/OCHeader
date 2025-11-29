@class NSString, NSData, StoreWXaRedirectInfoItem;

@interface WCLocationInfo : NSObject <NSCoding, PBCoding>

@property (nonatomic) double locationLongitude;
@property (nonatomic) double locationLatitude;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *poiAddress;
@property (nonatomic) double poiScale;
@property (retain, nonatomic) NSString *poiInfoUrl;
@property (retain, nonatomic) NSString *poiClassifyId;
@property (nonatomic) int poiClassifyType;
@property (nonatomic) int poiClickableStatus;
@property (retain, nonatomic) NSData *poiBuff;
@property (copy, nonatomic) NSString *buildingID;
@property (copy, nonatomic) NSString *floorName;
@property (copy, nonatomic) NSString *adCode;
@property (nonatomic) unsigned int showFlag;
@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) StoreWXaRedirectInfoItem *storeWXaRedirectInfoItem;
@property (retain, nonatomic) NSString *poiUrl;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL isMaterialPOI;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *displayPoiAddressName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_locationLongitude;
+ (void)PBArrayAdd_locationLatitude;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_poiAddress;
+ (void)PBArrayAdd_poiScale;
+ (void)PBArrayAdd_poiInfoUrl;
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_poiClassifyType;
+ (void)PBArrayAdd_poiClickableStatus;
+ (void)PBArrayAdd_poiBuff;
+ (void)PBArrayAdd_showFlag;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_poiUrl;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_displayPoiAddressName;
+ (void)PBArrayAdd_buildingID;
+ (void)PBArrayAdd_floorName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)getDisplayCity;
- (id)getDisplayPOIAddress;
- (BOOL)isPoiInfo;
- (BOOL)isValidForShow;
- (BOOL)isLocationValid;
- (BOOL)isPoiInfoClickable;
- (struct CLLocationCoordinate2D { double x0; double x1; })location;
- (void)setLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void).cxx_destruct;

@end

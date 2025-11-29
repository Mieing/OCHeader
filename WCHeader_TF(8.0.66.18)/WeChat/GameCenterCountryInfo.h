@class NSString;

@interface GameCenterCountryInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) unsigned int lastFetchTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_productID;
+ (void)PBArrayAdd_countryCode;
+ (void)PBArrayAdd_lastFetchTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end

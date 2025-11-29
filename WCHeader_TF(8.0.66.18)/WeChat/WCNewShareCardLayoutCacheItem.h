@class NSString, NSMutableArray;

@interface WCNewShareCardLayoutCacheItem : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *localCityList;
@property (retain, nonatomic) NSMutableArray *otherCityList;
@property (retain, nonatomic) NSString *cityName;
@property (nonatomic) unsigned int lastUpdateTime;
@property (retain, nonatomic) NSString *entryTip;
@property (retain, nonatomic) NSMutableArray *entryIcons;
@property (nonatomic) BOOL entryShowRedDot;
@property (nonatomic) BOOL entryShowNew;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_localCityList;
+ (void)PBArrayAdd_otherCityList;
+ (void)PBArrayAdd_cityName;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_entryTip;
+ (void)PBArrayAdd_entryIcons;
+ (void)PBArrayAdd_entryShowNew;
+ (void)PBArrayAdd_entryShowRedDot;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end

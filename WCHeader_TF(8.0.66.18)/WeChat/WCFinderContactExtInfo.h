@class NSString;

@interface WCFinderContactExtInfo : NSObject <WCTColumnCoding, PBCoding>

@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (nonatomic) int sexType;
@property (nonatomic) unsigned long long birthYear;
@property (nonatomic) unsigned long long birthMonth;
@property (nonatomic) unsigned long long birthDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_sexType;
+ (void)PBArrayAdd_birthYear;
+ (void)PBArrayAdd_birthMonth;
+ (void)PBArrayAdd_birthDay;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (id)infoWithFinderExtInfo:(id)a0;
+ (id)infoWithCountry:(id)a0 province:(id)a1 city:(id)a2 sex:(int)a3;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithFinderExtInfo:(id)a0;
- (id)initWithCountry:(id)a0 province:(id)a1 city:(id)a2 sex:(int)a3;
- (id)convertToFinderContactExtInfo;
- (void).cxx_destruct;

@end

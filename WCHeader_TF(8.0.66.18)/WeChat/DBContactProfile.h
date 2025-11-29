@class NSString;

@interface DBContactProfile : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) unsigned int sex;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *patSuffix;
@property (retain, nonatomic) NSString *textStatusID;
@property (retain, nonatomic) NSString *textStatusExtInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sex;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_patSuffix;
+ (void)PBArrayAdd_textStatusID;
+ (void)PBArrayAdd_textStatusExtInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end

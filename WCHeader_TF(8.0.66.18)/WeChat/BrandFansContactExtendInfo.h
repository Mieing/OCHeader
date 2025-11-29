@class NSString, NSData;

@interface BrandFansContactExtendInfo : NSObject <WCTColumnCoding, PBCoding>

@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (nonatomic) unsigned int sex;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *renderMPAppURL;
@property (nonatomic) BOOL inBlackList;
@property (copy, nonatomic) NSData *interactiveInfo;
@property (nonatomic) BOOL isFriend;
@property (copy, nonatomic) NSString *friendNickname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_sex;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_renderMPAppURL;
+ (void)PBArrayAdd_inBlackList;
+ (void)PBArrayAdd_isFriend;
+ (void)PBArrayAdd_friendNickname;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithUserInfo:(id)a0;
- (id)contactDescription;
- (void).cxx_destruct;

@end

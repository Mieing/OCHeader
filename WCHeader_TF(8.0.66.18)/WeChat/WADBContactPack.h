@class NSString;

@interface WADBContactPack : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *aliasName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *fullPinYin;
@property (retain, nonatomic) NSString *headHDImageURL;
@property (retain, nonatomic) NSString *headImageURL;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) unsigned int uiLastUpdateAppVersionInfoTime;
@property (nonatomic) unsigned int uiLastLaunchAppTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_aliasName;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_fullPinYin;
+ (void)PBArrayAdd_headHDImageURL;
+ (void)PBArrayAdd_headImageURL;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_uiLastUpdateAppVersionInfoTime;
+ (void)PBArrayAdd_uiLastLaunchAppTime;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end

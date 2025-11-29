@class NSString;

@interface WCPrivacyPolicyData : NSObject <PBCoding>

@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *birthday;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_birthday;
+ (void)initialize;
+ (id)rootPath;
+ (id)filePathWithUserName:(id)a0;
+ (id)loadDataWithUserName:(id)a0;
+ (void)saveBirthday:(id)a0 userName:(id)a1;
+ (void)testClearAllData;

- (id)getPBPropertyTable;
- (id)jsonDesc;
- (void).cxx_destruct;

@end

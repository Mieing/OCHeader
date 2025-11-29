@class NSArray, NSString;

@interface AWEABTestInfoModel : AWESettingsDebugMetaData

@property (copy, nonatomic) NSArray *serverTestCaseDataArray;
@property (copy, nonatomic) NSArray *testCaseMessages;
@property (nonatomic) unsigned long long propertyType;
@property (readonly, copy, nonatomic) NSString *serverString;

- (void)configBoolWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2 title:(id)a3 description:(id)a4 author:(id)a5 PMs:(id)a6 appVersion:(id)a7 linesOfBusiness:(id)a8 modules:(id)a9;
- (void)configEnumWithPropertyName:(id)a0 serverString:(id)a1 serverTestCaseDataArray:(id)a2 defaultValue:(id)a3 title:(id)a4 testCaseMessages:(id)a5 description:(id)a6 author:(id)a7 PMs:(id)a8 appVersion:(id)a9 linesOfBusiness:(id)a10 modules:(id)a11;
- (void)configNumberWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2 title:(id)a3 description:(id)a4 author:(id)a5 PMs:(id)a6 appVersion:(id)a7 linesOfBusiness:(id)a8 modules:(id)a9;
- (void)configStringWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2 title:(id)a3 description:(id)a4 author:(id)a5 PMs:(id)a6 appVersion:(id)a7 linesOfBusiness:(id)a8 modules:(id)a9;
- (void)setMockEnums:(id)a0;
- (void)configBoolWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2 title:(id)a3;
- (void)configEnumWithPropertyName:(id)a0 serverString:(id)a1 serverTestCaseDataArray:(id)a2 defaultValue:(id)a3 title:(id)a4 testCaseMessages:(id)a5;
- (void)configNumberWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2 title:(id)a3;
- (void)configStringWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2 title:(id)a3;
- (id)ownersWithAuthor:(id)a0 pms:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

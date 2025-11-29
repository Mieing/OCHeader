@class NSMutableDictionary;

@interface AWEStudioConfigManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *getterDict;

+ (void)initialize;
+ (id)sharedInstance;

- (void)registerStringABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2 title:(id)a3 description:(id)a4 author:(id)a5 PMs:(id)a6 appVersion:(id)a7 linesOfBusiness:(id)a8 modules:(id)a9;
- (void)registerBoolABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(BOOL)a2 title:(id)a3;
- (void)registerBoolABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(BOOL)a2 title:(id)a3 description:(id)a4 author:(id)a5 PMs:(id)a6 appVersion:(id)a7 linesOfBusiness:(id)a8 modules:(id)a9;
- (void)registerEnumABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 serverTestCaseDataArray:(id)a2 defaultValue:(long long)a3 title:(id)a4 testCaseMessages:(id)a5;
- (void)registerEnumABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 serverTestCaseDataArray:(id)a2 defaultValue:(long long)a3 title:(id)a4 testCaseMessages:(id)a5 description:(id)a6 author:(id)a7 PMs:(id)a8 appVersion:(id)a9 linesOfBusiness:(id)a10 modules:(id)a11;
- (void)registerNumberABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2 title:(id)a3;
- (void)registerNumberABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2 title:(id)a3 description:(id)a4 author:(id)a5 PMs:(id)a6 appVersion:(id)a7 linesOfBusiness:(id)a8 modules:(id)a9;
- (void)registerNumberABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2;
- (void)setGetter:(id /* block */)a0 forKey:(id)a1;
- (id /* block */)getterForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
